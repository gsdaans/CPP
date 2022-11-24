#include <set>
#include <type_traits>
#include <concepts>

template <class T>
std::set<T> operator+(std::set<T> &left, std::set<T> &right)
{
    std::set<T> result = left;
    result.insert(right.begin(), right.end());
    return result;
}


template <class T>
std::set<T> operator-(std::set<T> &left, std::set<T> &right)
{
    std::set<int> result;
    for (auto s : left)
    {
        result.insert(s);
    }
    for (auto s : right)
    {
        result.erase(s);
    }
    return result;
}

std::set<int> operator*(const std::set<int>& left,const std::set<int>& right)
{
    std::set<int> result;
    for (auto s : left)
    {
        for (auto sd : right)
        {
    	    result.insert(s+sd);
        }
    }
    
    return result;
}

template <class T>
std::set<T> operator^(const std::set<T>& left,const std::set<T>& right)
{
    std::set<T> result;
    for (auto s : left)
    {
        result.insert(s);
    }
    for (auto s : right)
    {
    	if (result.count(s) == 0)
            result.insert(s);
        else
            result.erase(s);
    }
    return result;
}

std::set<int> operator^(const std::set<int>& left,const std::set<int>& right)
{
    std::set<int> result;
    for (auto s : left)
    {
        result.insert(s);
    }
    for (auto s : right)
    {
    	if (result.count(s) == 0)
            result.insert(s);
        else
            result.erase(s);
    }
    return result;
}

std::set<int> operator^(const std::set<int>& left,const int n)
{
    std::set<int> result = left;
    for(int i = 1; i < n; i++)
        result = result * left;
    
    return result;
}

std::set<std::string> operator*(const std::set<std::string>& left,const std::set<std::string>& right)
{
    std::set<std::string> result;
    for (auto s : left)
    {
        for (auto sd : right)
        {
    	    result.insert(s+sd);
        }
    }
    
    return result;
}

std::set<std::string> operator^(const std::set<std::string>& left,const int n)
{
    if(n < 0)
        throw std::invalid_argument( "received negative value" );
    if(n == 0)
        return std::set<std::string>{""};
    std::set<std::string> result = left;
    for(int i = 1; i < n; i++)
        result = result * left;
    
    return result;
}
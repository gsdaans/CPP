
Name
	
Size
	
Modified
CMakeLists.txt Actions
	< 1 KB	a day ago
main.cpp Actions
	< 1 KB	a day ago
sources.cpp Actions
	< 1 KB	2 days ago
sources.h Actions
	< 1 KB	2 days ago
sources_2.cpp Actions
	< 1 KB	2 days ago
sources_2.h Actions
	< 1 KB	2 days ago
	6 files 	892 B	

Nextcloud – a safe home for all your data

Get your own free account

cmake_minimum_required(VERSION 3.0)

# set the project name
project(MyFirstProg)

# add the lib
add_library(mysource SHARED sources.cpp)

# add another
#add_library(mysource_2 SHARED sources_2.cpp)

# add the executable
add_executable(main main.cpp)

# do not forget to link
target_link_libraries(main mysource)

#target_link_libraries(main mysource_2)



PROJECT(headers_test)


include_directories( 
    ${sdk_path}/include 
)
    
link_directories( ${sdk_path}/lib )

 
add_executable(headers_test main.cpp cat.cpp dog.cpp repoAnimales.cpp)
   
TARGET_LINK_LIBRARIES(headers_test)
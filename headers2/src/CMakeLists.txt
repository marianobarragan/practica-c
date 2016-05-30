PROJECT(headers2)


include_directories( 
    ${sdk_path}/include 
)
    
link_directories( ${sdk_path}/lib )

 
add_executable(headers22 main.cpp cat.cpp)
   
TARGET_LINK_LIBRARIES(headers2)
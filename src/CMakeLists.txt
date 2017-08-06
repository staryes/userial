#find_library(MGL mgl PATHS /usr/local/lib)

ADD_EXECUTABLE( serial_test main.cpp userial.cpp userial.h)
#TARGET_LINK_LIBRARIES( hsvs ${OpenCV_LIBS} )
#target_link_libraries( eyeLike ${MGL})

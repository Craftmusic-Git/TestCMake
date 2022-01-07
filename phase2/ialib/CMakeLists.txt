project(IaLib)

include_directories(include)

file(GLOB sources src/*)

add_library(ia STATIC ${sources})

install(TARGETS ia DESTINATION /usr/lib)
install(FILES ia.h DESTINATION /usr/include)
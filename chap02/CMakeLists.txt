cmake_minimum_required(VERSION 3.23)
project(chap02 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(chap02
        ary_max.c
        ary_max_rand.c
        rev_ary.c
        card_conv.c
        prime1.c
        prime2.c
        prime3.c
        dayofyear.c)

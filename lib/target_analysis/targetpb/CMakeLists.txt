string(REPLACE " -Wall -Werror" "" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})

INCLUDE(FindProtobuf)
FIND_PACKAGE(Protobuf REQUIRED)
INCLUDE_DIRECTORIES(${PROTOBUF_INCLUDE_DIR})
PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HEADERS targetpb.proto)
ADD_LIBRARY(proto ${PROTO_HEADERS} ${PROTO_SRCS})

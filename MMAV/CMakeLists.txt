cmake_minimum_required (VERSION 3.8)

include_directories (../3rdpart/ffmpeg/include)

add_library (
	MMAV

	MMAVReader.cpp
	MMAVPacket.cpp
 "MMAVPacketPrivate.h" "MMAVReaderPrivate.h")

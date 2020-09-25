#include "MMAV.h"

#include "MMAVPacketPrivate.h"

MMAVPacket::MMAVPacket()
{
	imp = new MMAVPacketPrivate();
	imp->pkt = av_packet_alloc();
}

MMAVPacket::~MMAVPacket()
{
	if (imp->pkt != nullptr) {
		av_packet_free(&imp->pkt);
		delete imp;
		imp = nullptr;
	}
}
#ifndef _AV_TRANSCODER_CODED_STREAM_I_OUTPUT_STREAM_HPP_
#define _AV_TRANSCODER_CODED_STREAM_I_OUTPUT_STREAM_HPP_

#include <AvTranscoder/codec/AudioCodec.hpp>
#include <AvTranscoder/codec/VideoCodec.hpp>
#include <AvTranscoder/frame/Frame.hpp>

namespace avtranscoder
{

class IOutputStream
{
public:
	virtual ~IOutputStream() {};

	virtual size_t getStreamIndex() const = 0;

	virtual bool wrap( CodedData& data ) = 0;

	// Stream properties
	virtual VideoCodec getVideoCodec() const = 0;
	virtual AudioCodec getAudioCodec() const = 0;
};

}

#endif
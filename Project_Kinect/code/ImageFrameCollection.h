#pragma once

#include <sstream>
#include <array>
#include <vector>
#include <string>
using namespace std;

#include "common/defines.hpp"
#include "common/LabelMapper.h"
#include "ImageFrame.h"


class ImageFrameCollection
{
private:
	vector<ImageFrame> collection = vector<ImageFrame>();
	string label;

public:
	ImageFrameCollection();

	void setLabel(string src);

	void stackFrame(const ImageFrame& f);

	// array<string, Show_Status_DistanceFrame_Size> lastFrameToString();

	void setStandard(TIMESPAN startTime);  // ǥ��ȭ (FrameSize, Lerp)

	// save image frames

	void save(string dirpath, int);

	int getCollectionSize();
	
	void clear();

	string getLabel();

	void toStream(stringstream&, char delimeter);

private:

};
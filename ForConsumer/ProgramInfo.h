#pragma once

#include <string>

class ProgramInfo
{

public:

	static ProgramInfo* Instance()
	{
		static ProgramInfo info;
		return &info;
	}

	const char * getVersion() { return ProgramVersion; }

private:
	ProgramInfo() {};
	~ProgramInfo() {};
	ProgramInfo(const ProgramInfo&);

	const char* ProgramVersion = "0.0.1";

};


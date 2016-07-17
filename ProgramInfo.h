#pragma once

#include <map>
#include <string>

class ProgramInfo
{

public:


	static ProgramInfo* Instance()
	{
		if (inst == false)
		{
			inst = new ProgramInfo;
			return inst;
		}
		return inst;
	}

	char *getVersion() { return ProgramVersion; }

private:
	ProgramInfo();
 	~ProgramInfo();
	static ProgramInfo* inst;

	char* ProgramVersion = "0.0.1";

};


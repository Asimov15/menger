#include "shared.h"

class conway3D : public ca3Dbase
{
public:
	conway3D(int activateMinimum, int activateMaximum, int surviveMinimum, int surviveMaximum, int size, bool wrap);

	int activateMinimum, activateMaximum, surviveMinimum, surviveMaximum;

	void mutatebyindex(int i);
};

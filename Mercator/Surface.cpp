// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2003 Alistair Riddoch

#include <Mercator/Surface.h>

#include <Mercator/Segment.h>

namespace Mercator {

Surface::Surface(Segment & segment) : Buffer(segment, 4)
{
}

Surface::~Surface()
{
}

} // namespace Mercator

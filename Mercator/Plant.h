// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2004 Alistair Riddoch

#ifndef MERCATOR_PLANT_H
#define MERCATOR_PLANT_H

#include <wfmath/point.h>
#include <wfmath/quaternion.h>

namespace Mercator {

/// This is the core class for any area to be populated with vegetation
class Plant {
  private:
    WFMath::Point<2> m_displacement;
    WFMath::Quaternion m_orientation;
    float m_height;
  public:
    Plant();
    ~Plant();

    const WFMath::Point<2> & getDisplacement() const {
        return m_displacement;
    }

    const WFMath::Quaternion & getOrientation() const {
        return m_orientation;
    }
};

}

#endif // MERCATOR_PLANT_H
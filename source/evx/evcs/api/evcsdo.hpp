///////////////////////////////////////////////////////////////////////
//   File: evcsdo.hpp
//
// Author: $author$
//   Date: 10/8/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVCSDO_HPP
#define _EVCSDO_HPP

#include "evcspendingactions.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvcsDo
//
// Author: $author$
//   Date: 10/8/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvcsDo
: virtual public EvcsAction,
  virtual public EvcsPendingActions
{
public:
    typedef EvcsAction CImplements;
    typedef EvcsDo CDerives;
};
#endif // _EVCSDO_HPP

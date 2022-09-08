///////////////////////////////////////////////////////////////////////
//   File: evcclient.hpp
//
// Author: $author$
//   Date: 5/11/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVCCLIENT_HPP
#define _EVCCLIENT_HPP

#include "evbase.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: EvcClient
//
// Author: $author$
//   Date: 5/11/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvcClient
: virtual public EvBase
{
public:
    typedef EvBase CImplements;
    typedef EvcClient CDerives;
};
#endif // _EVCCLIENT_HPP

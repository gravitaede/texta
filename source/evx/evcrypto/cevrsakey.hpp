///////////////////////////////////////////////////////////////////////
//   File: cevrsakey.hpp
//
// Author: $author$
//   Date: 10/27/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _CEVRSAKEY_HPP
#define _CEVRSAKEY_HPP

#include "evrsakey.hpp"
#include "cevcryptor.hpp"

///////////////////////////////////////////////////////////////////////
//  Class: CEvRSAKey
//
// Author: $author$
//   Date: 10/27/2007
///////////////////////////////////////////////////////////////////////
class CEvRSAKey
: virtual public EvRSAKey,
  public CEvCryptor
{
public:
    typedef EvRSAKey CImplements;
    typedef CEvCryptor CExtends;
    typedef CEvRSAKey CDerives;

    bool m_isCreated;

    ///////////////////////////////////////////////////////////////////////
    // Constructor: CEvRSAKey
    //
    //       Author: $author$
    //         Date: 10/27/2007
    ///////////////////////////////////////////////////////////////////////
    CEvRSAKey() 
    : m_isCreated(false)
    {
    }
    ///////////////////////////////////////////////////////////////////////
    // Destructor: ~CEvRSAKey
    //
    //      Author: $author$
    //        Date: 10/27/2007
    ///////////////////////////////////////////////////////////////////////
    virtual ~CEvRSAKey()
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Function: Destroy
    //
    //   Author: $author$
    //     Date: 10/27/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError Destroy() 
    {
        EvError error = EV_ERROR_NOT_IMPLEMENTED;
        return error;
    }
    ///////////////////////////////////////////////////////////////////////
    // Function: Crypt
    //
    //   Author: $author$
    //     Date: 10/27/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG Crypt
    (BYTE* out,
     ULONG outSize,
     const BYTE* in,
     LONG inLength=-1) 
    {
        LONG length = -EV_ERROR_NOT_IMPLEMENTED;
        return length;
    }
    ///////////////////////////////////////////////////////////////////////
    // Function: GetModulusBytes
    //
    //   Author: $author$
    //     Date: 11/26/2007
    ///////////////////////////////////////////////////////////////////////
    virtual LONG GetModulusBytes() const 
    {
        LONG count = -EV_ERROR_NOT_IMPLEMENTED;
        return count;
    }
};
#endif // _CEVRSAKEY_HPP

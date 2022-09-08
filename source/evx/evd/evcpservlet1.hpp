///////////////////////////////////////////////////////////////////////
//   File: evcpservlet.hpp
//
// Author: $author$
//   Date: 4/21/2007
//
//    $Id$
///////////////////////////////////////////////////////////////////////

#ifndef _EVCPSERVLET_HPP
#define _EVCPSERVLET_HPP

#include "evcpservletrequest.hpp"
#include "evcpservletresponse.hpp"
#include "evservlet.hpp"

class EV_EXPORT_CLASS EvcpServletContext;

///////////////////////////////////////////////////////////////////////
//  Class: EvcpServlet
//
// Author: $author$
//   Date: 4/21/2007
///////////////////////////////////////////////////////////////////////
class EV_EXPORT_CLASS EvcpServlet
: virtual public EvServlet
{
public:
    typedef EvServlet CImplements;
    typedef EvcpServlet CDerives;

    ///////////////////////////////////////////////////////////////////////
    // Function: Service
    //
    //   Author: $author$
    //     Date: 4/21/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError Service
    (EvcpServletRequest& request,
     EvcpServletResponse& response) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: RespondStatusOk
    //
    //   Author: $author$
    //     Date: 5/23/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError RespondStatusOk
    (EvcpServletResponse& response) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: RespondStatus
    //
    //   Author: $author$
    //     Date: 5/29/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError RespondStatus
    (EvcpServletResponse& response, int status) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: RespondStatusCode
    //
    //   Author: $author$
    //     Date: 5/1/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError RespondStatusCode
    (EvcpServletResponse& response,
     ULONG statusCode, const char* statusDesc) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: RespondStatusCode
    //
    //   Author: $author$
    //     Date: 5/1/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError RespondStatusCode
    (EvCharWriter& writer,
     EvcpServletResponse& response,
     ULONG statusCode, const char* statusDesc) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: SetEvcpServletContext
    //
    //   Author: $author$
    //     Date: 5/24/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError SetEvcpServletContext
    (EvcpServletContext* context) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetEvcpServletContext
    //
    //   Author: $author$
    //     Date: 5/24/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvcpServletContext* GetEvcpServletContext
    (EvError& error) const = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: SetParentEvcpServlet
    //
    //   Author: $author$
    //     Date: 5/24/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvError SetParentEvcpServlet
    (EvcpServlet* servlet) = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: GetParentEvcpServlet
    //
    //   Author: $author$
    //     Date: 5/24/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvcpServlet* 
    GetParentEvcpServlet(EvError& error) const = 0;
    ///////////////////////////////////////////////////////////////////////
    // Function: FindEvcpServlet
    //
    //   Author: $author$
    //     Date: 5/24/2007
    ///////////////////////////////////////////////////////////////////////
    virtual EvcpServlet* FindEvcpServlet
    (const char* name, LONG length=-1) const = 0;
};

#endif // _EVCPSERVLET_HPP
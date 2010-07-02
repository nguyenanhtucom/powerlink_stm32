/****************************************************************************

  (c) SYSTEC electronic GmbH, D-07973 Greiz, August-Bebel-Str. 29
      www.systec-electronic.com

  Project:      openPOWERLINK

  Description:  include file for communication abstraction layer
                for the Epl-Obd-Userspace-Modul

  License:

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.

    3. Neither the name of SYSTEC electronic GmbH nor the names of its
       contributors may be used to endorse or promote products derived
       from this software without prior written permission. For written
       permission, please contact info@systec-electronic.com.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
    COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
    CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
    LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
    ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
    POSSIBILITY OF SUCH DAMAGE.

    Severability Clause:

        If a provision of this License is or becomes illegal, invalid or
        unenforceable in any jurisdiction, that shall not affect:
        1. the validity or enforceability in that jurisdiction of any other
           provision of this License; or
        2. the validity or enforceability in other jurisdictions of that or
           any other provision of this License.

  -------------------------------------------------------------------------

                $RCSfile: EplObduCal.h,v $

                $Author: D.Krueger $

                $Revision: 1.5 $  $Date: 2009/03/30 14:34:23 $

                $State: Exp $

                Build Environment:
                    GCC V3.4

  -------------------------------------------------------------------------

  Revision History:

  2006/06/19 k.t.:   start of the implementation


****************************************************************************/

#ifndef _EPLOBDUCAL_H_
#define _EPLOBDUCAL_H_

#include "EplObd.h"


//---------------------------------------------------------------------------
// const defines
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// typedef
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// function prototypes
//---------------------------------------------------------------------------
EPLDLLEXPORT tEplKernel PUBLIC EplObduCalWriteEntry (
                                                unsigned int  uiIndex_p,
                                                unsigned int  uiSubIndex_p,
                                                void * pSrcData_p,
                                                tEplObdSize   Size_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT tEplKernel PUBLIC EplObduCalReadEntry (
                                            unsigned int        uiIndex_p,
                                            unsigned int        uiSubIndex_p,
                                            void *       pDstData_p,
                                            tEplObdSize *pSize_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT tEplKernel PUBLIC EplObduCalAccessOdPart (
                                                    tEplObdPart ObdPart_p,
                                                    tEplObdDir Direction_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT tEplKernel PUBLIC EplObduCalDefineVar (tEplVarParam MEM* pVarParam_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT void* PUBLIC EplObduCalGetObjectDataPtr ( unsigned int uiIndex_p,
                                            unsigned int uiSubIndex_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT tEplKernel PUBLIC EplObduCalRegisterUserOd (tEplObdEntryPtr pUserOd_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT void PUBLIC EplObduCalInitVarEntry (tEplObdVarEntry MEM* pVarEntry_p,
                                        BYTE bType_p, tEplObdSize ObdSize_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT tEplObdSize PUBLIC EplObduCalGetDataSize(unsigned int uiIndex_p,
                                        unsigned int uiSubIndex_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT unsigned int PUBLIC EplObduCalGetNodeId(void);
//---------------------------------------------------------------------------
EPLDLLEXPORT tEplKernel PUBLIC EplObduCalSetNodeId(unsigned int uiNodeId_p,
                                         tEplObdNodeIdType NodeIdType_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT tEplKernel PUBLIC EplObduCalGetAccessType(unsigned int uiIndex_p,
                                        unsigned int   uiSubIndex_p,
                                        tEplObdAccess* pAccessTyp_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT tEplKernel PUBLIC EplObduCalReadEntryToLe (unsigned int        uiIndex_p,
                                        unsigned int        uiSubIndex_p,
                                        void *              pDstData_p,
                                        tEplObdSize *       pSize_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT tEplKernel PUBLIC EplObduCalWriteEntryFromLe (unsigned int  uiIndex_p,
                                        unsigned int  uiSubIndex_p,
                                        void *        pSrcData_p,
                                        tEplObdSize   Size_p);
//---------------------------------------------------------------------------
EPLDLLEXPORT tEplKernel PUBLIC EplObduCalSearchVarEntry (EPL_MCO_DECL_INSTANCE_PTR_
                                        unsigned int            uiIndex_p,
                                        unsigned int            uiSubindex_p,
                                        tEplObdVarEntry MEM**   ppVarEntry_p);


#endif  // #ifndef _EPLOBDUCAL_H_



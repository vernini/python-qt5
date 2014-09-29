/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:25 2014
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtWebKitWidgets.h"

#line 62 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWebKitWidgets/qwebframe.sip"
#include <qwebframe.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKitWidgets/sipQtWebKitWidgetsQWebFrameRenderLayers.cpp"

#line 62 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWebKitWidgets/qwebframe.sip"
#include <qwebframe.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKitWidgets/sipQtWebKitWidgetsQWebFrameRenderLayers.cpp"


extern "C" {static int slot_QWebFrame_RenderLayers___bool__(PyObject *);}
static int slot_QWebFrame_RenderLayers___bool__(PyObject *sipSelf)
{
    QWebFrame::RenderLayers *sipCpp = reinterpret_cast<QWebFrame::RenderLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebFrame_RenderLayers));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebFrame::RenderLayers::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKitWidgets/sipQtWebKitWidgetsQWebFrameRenderLayers.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebFrame_RenderLayers___ne__(PyObject *,PyObject *);}
static PyObject *slot_QWebFrame_RenderLayers___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QWebFrame::RenderLayers *sipCpp = reinterpret_cast<QWebFrame::RenderLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebFrame_RenderLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWebFrame::RenderLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebFrame_RenderLayers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebFrame::RenderLayers::Int() != a0->operator QWebFrame::RenderLayers::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKitWidgets/sipQtWebKitWidgetsQWebFrameRenderLayers.cpp"
            sipReleaseType(const_cast<QWebFrame::RenderLayers *>(a0),sipType_QWebFrame_RenderLayers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKitWidgets,ne_slot,sipType_QWebFrame_RenderLayers,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QWebFrame_RenderLayers___eq__(PyObject *,PyObject *);}
static PyObject *slot_QWebFrame_RenderLayers___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QWebFrame::RenderLayers *sipCpp = reinterpret_cast<QWebFrame::RenderLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebFrame_RenderLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWebFrame::RenderLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebFrame_RenderLayers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebFrame::RenderLayers::Int() == a0->operator QWebFrame::RenderLayers::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKitWidgets/sipQtWebKitWidgetsQWebFrameRenderLayers.cpp"
            sipReleaseType(const_cast<QWebFrame::RenderLayers *>(a0),sipType_QWebFrame_RenderLayers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKitWidgets,eq_slot,sipType_QWebFrame_RenderLayers,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QWebFrame_RenderLayers___invert__(PyObject *);}
static PyObject *slot_QWebFrame_RenderLayers___invert__(PyObject *sipSelf)
{
    QWebFrame::RenderLayers *sipCpp = reinterpret_cast<QWebFrame::RenderLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebFrame_RenderLayers));

    if (!sipCpp)
        return 0;


    {
        {
            QWebFrame::RenderLayers*sipRes;

            sipRes = new QWebFrame::RenderLayers(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QWebFrame_RenderLayers,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebFrame_RenderLayers___and__(PyObject *,PyObject *);}
static PyObject *slot_QWebFrame_RenderLayers___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWebFrame::RenderLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebFrame_RenderLayers, &a0, &a0State, &a1))
        {
            QWebFrame::RenderLayers*sipRes;

            sipRes = new QWebFrame::RenderLayers((*a0 & a1));
            sipReleaseType(a0,sipType_QWebFrame_RenderLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebFrame_RenderLayers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKitWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWebFrame_RenderLayers___xor__(PyObject *,PyObject *);}
static PyObject *slot_QWebFrame_RenderLayers___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWebFrame::RenderLayers* a0;
        int a0State = 0;
        QWebFrame::RenderLayers* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QWebFrame_RenderLayers, &a0, &a0State, sipType_QWebFrame_RenderLayers, &a1, &a1State))
        {
            QWebFrame::RenderLayers*sipRes;

            sipRes = new QWebFrame::RenderLayers((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QWebFrame_RenderLayers,a0State);
            sipReleaseType(a1,sipType_QWebFrame_RenderLayers,a1State);

            return sipConvertFromNewType(sipRes,sipType_QWebFrame_RenderLayers,NULL);
        }
    }

    {
        QWebFrame::RenderLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebFrame_RenderLayers, &a0, &a0State, &a1))
        {
            QWebFrame::RenderLayers*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QWebFrame::RenderLayers(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKitWidgets/sipQtWebKitWidgetsQWebFrameRenderLayers.cpp"
            sipReleaseType(a0,sipType_QWebFrame_RenderLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebFrame_RenderLayers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKitWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWebFrame_RenderLayers___or__(PyObject *,PyObject *);}
static PyObject *slot_QWebFrame_RenderLayers___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWebFrame::RenderLayers* a0;
        int a0State = 0;
        QWebFrame::RenderLayers* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QWebFrame_RenderLayers, &a0, &a0State, sipType_QWebFrame_RenderLayers, &a1, &a1State))
        {
            QWebFrame::RenderLayers*sipRes;

            sipRes = new QWebFrame::RenderLayers((*a0 | *a1));
            sipReleaseType(a0,sipType_QWebFrame_RenderLayers,a0State);
            sipReleaseType(a1,sipType_QWebFrame_RenderLayers,a1State);

            return sipConvertFromNewType(sipRes,sipType_QWebFrame_RenderLayers,NULL);
        }
    }

    {
        QWebFrame::RenderLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebFrame_RenderLayers, &a0, &a0State, &a1))
        {
            QWebFrame::RenderLayers*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QWebFrame::RenderLayers(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKitWidgets/sipQtWebKitWidgetsQWebFrameRenderLayers.cpp"
            sipReleaseType(a0,sipType_QWebFrame_RenderLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebFrame_RenderLayers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKitWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWebFrame_RenderLayers___int__(PyObject *);}
static PyObject *slot_QWebFrame_RenderLayers___int__(PyObject *sipSelf)
{
    QWebFrame::RenderLayers *sipCpp = reinterpret_cast<QWebFrame::RenderLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebFrame_RenderLayers));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebFrame_RenderLayers___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QWebFrame_RenderLayers___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebFrame_RenderLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWebFrame::RenderLayers *sipCpp = reinterpret_cast<QWebFrame::RenderLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebFrame_RenderLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QWebFrame::RenderLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebFrame_RenderLayers, &a0, &a0State))
        {
            sipCpp->QWebFrame::RenderLayers::operator^=(*a0);
            sipReleaseType(a0,sipType_QWebFrame_RenderLayers,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QWebFrame_RenderLayers___ior__(PyObject *,PyObject *);}
static PyObject *slot_QWebFrame_RenderLayers___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebFrame_RenderLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWebFrame::RenderLayers *sipCpp = reinterpret_cast<QWebFrame::RenderLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebFrame_RenderLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QWebFrame::RenderLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebFrame_RenderLayers, &a0, &a0State))
        {
            sipCpp->QWebFrame::RenderLayers::operator|=(*a0);
            sipReleaseType(a0,sipType_QWebFrame_RenderLayers,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QWebFrame_RenderLayers___iand__(PyObject *,PyObject *);}
static PyObject *slot_QWebFrame_RenderLayers___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebFrame_RenderLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWebFrame::RenderLayers *sipCpp = reinterpret_cast<QWebFrame::RenderLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebFrame_RenderLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QWebFrame::RenderLayers::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebFrame_RenderLayers(void *, const sipTypeDef *);}
static void *cast_QWebFrame_RenderLayers(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebFrame_RenderLayers)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebFrame_RenderLayers(void *, int);}
static void release_QWebFrame_RenderLayers(void *sipCppV,int)
{
    delete reinterpret_cast<QWebFrame::RenderLayers *>(sipCppV);
}


extern "C" {static void assign_QWebFrame_RenderLayers(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebFrame_RenderLayers(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebFrame::RenderLayers *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebFrame::RenderLayers *>(sipSrc);
}


extern "C" {static void *array_QWebFrame_RenderLayers(SIP_SSIZE_T);}
static void *array_QWebFrame_RenderLayers(SIP_SSIZE_T sipNrElem)
{
    return new QWebFrame::RenderLayers[sipNrElem];
}


extern "C" {static void *copy_QWebFrame_RenderLayers(const void *, SIP_SSIZE_T);}
static void *copy_QWebFrame_RenderLayers(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebFrame::RenderLayers(reinterpret_cast<const QWebFrame::RenderLayers *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebFrame_RenderLayers(sipSimpleWrapper *);}
static void dealloc_QWebFrame_RenderLayers(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebFrame_RenderLayers(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebFrame_RenderLayers(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebFrame_RenderLayers(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebFrame::RenderLayers *sipCpp = 0;

    {
        const QWebFrame::RenderLayers* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QWebFrame_RenderLayers, &a0, &a0State))
        {
            sipCpp = new QWebFrame::RenderLayers(*a0);
            sipReleaseType(const_cast<QWebFrame::RenderLayers *>(a0),sipType_QWebFrame_RenderLayers,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QWebFrame::RenderLayers(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QWebFrame::RenderLayers();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QWebFrame_RenderLayers(PyObject *, void **, int *, PyObject *);}
static int convertTo_QWebFrame_RenderLayers(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QWebFrame::RenderLayers **sipCppPtr = reinterpret_cast<QWebFrame::RenderLayers **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QWebFrame::RenderLayers is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWebFrame_RenderLayer)) ||
            sipCanConvertToType(sipPy, sipType_QWebFrame_RenderLayers, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWebFrame_RenderLayer)))
{
    *sipCppPtr = new QWebFrame::RenderLayers(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QWebFrame::RenderLayers *>(sipConvertToType(sipPy, sipType_QWebFrame_RenderLayers, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKitWidgets/sipQtWebKitWidgetsQWebFrameRenderLayers.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebFrame_RenderLayers[] = {
    {(void *)slot_QWebFrame_RenderLayers___bool__, bool_slot},
    {(void *)slot_QWebFrame_RenderLayers___ne__, ne_slot},
    {(void *)slot_QWebFrame_RenderLayers___eq__, eq_slot},
    {(void *)slot_QWebFrame_RenderLayers___invert__, invert_slot},
    {(void *)slot_QWebFrame_RenderLayers___and__, and_slot},
    {(void *)slot_QWebFrame_RenderLayers___xor__, xor_slot},
    {(void *)slot_QWebFrame_RenderLayers___or__, or_slot},
    {(void *)slot_QWebFrame_RenderLayers___int__, int_slot},
    {(void *)slot_QWebFrame_RenderLayers___ixor__, ixor_slot},
    {(void *)slot_QWebFrame_RenderLayers___ior__, ior_slot},
    {(void *)slot_QWebFrame_RenderLayers___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QWebFrame_RenderLayers, "\1QWebFrame.RenderLayers(QWebFrame.RenderLayers)\n"
    "QWebFrame.RenderLayers(int)\n"
    "QWebFrame.RenderLayers()");


pyqt5ClassTypeDef sipTypeDef_QtWebKitWidgets_QWebFrame_RenderLayers = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebFrame__RenderLayers,
        {0}
    },
    {
        sipNameNr_RenderLayers,
        {3, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebFrame_RenderLayers,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebFrame_RenderLayers,
    init_type_QWebFrame_RenderLayers,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QWebFrame_RenderLayers,
    assign_QWebFrame_RenderLayers,
    array_QWebFrame_RenderLayers,
    copy_QWebFrame_RenderLayers,
    release_QWebFrame_RenderLayers,
    cast_QWebFrame_RenderLayers,
    convertTo_QWebFrame_RenderLayers,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0,
    0
};
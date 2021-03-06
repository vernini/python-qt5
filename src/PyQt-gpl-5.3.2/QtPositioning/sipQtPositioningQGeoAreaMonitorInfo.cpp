/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:50 2014
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

#include "sipAPIQtPositioning.h"

#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtPositioning/qgeoareamonitorinfo.sip"
#include <qgeoareamonitorinfo.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPositioning/sipQtPositioningQGeoAreaMonitorInfo.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPositioning/sipQtPositioningQGeoAreaMonitorInfo.cpp"
#line 26 "sip/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPositioning/sipQtPositioningQGeoAreaMonitorInfo.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPositioning/sipQtPositioningQGeoAreaMonitorInfo.cpp"
#line 299 "sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPositioning/sipQtPositioningQGeoAreaMonitorInfo.cpp"
#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtPositioning/qgeoshape.sip"
#include <qgeoshape.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPositioning/sipQtPositioningQGeoAreaMonitorInfo.cpp"


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_name, "QGeoAreaMonitorInfo.name() -> str");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_name(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_name, doc_QGeoAreaMonitorInfo_name);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_setName, "QGeoAreaMonitorInfo.setName(str)");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_setName(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_setName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setName(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_setName, doc_QGeoAreaMonitorInfo_setName);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_identifier, "QGeoAreaMonitorInfo.identifier() -> str");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_identifier(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_identifier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->identifier());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_identifier, doc_QGeoAreaMonitorInfo_identifier);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_isValid, "QGeoAreaMonitorInfo.isValid() -> bool");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_isValid(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_isValid, doc_QGeoAreaMonitorInfo_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_area, "QGeoAreaMonitorInfo.area() -> QGeoShape");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_area(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_area(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp))
        {
            QGeoShape*sipRes;

            sipRes = new QGeoShape(sipCpp->area());

            return sipConvertFromNewType(sipRes,sipType_QGeoShape,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_area, doc_QGeoAreaMonitorInfo_area);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_setArea, "QGeoAreaMonitorInfo.setArea(QGeoShape)");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_setArea(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_setArea(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoShape* a0;
        QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp, sipType_QGeoShape, &a0))
        {
            sipCpp->setArea(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_setArea, doc_QGeoAreaMonitorInfo_setArea);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_expiration, "QGeoAreaMonitorInfo.expiration() -> QDateTime");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_expiration(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_expiration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp))
        {
            QDateTime*sipRes;

            sipRes = new QDateTime(sipCpp->expiration());

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_expiration, doc_QGeoAreaMonitorInfo_expiration);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_setExpiration, "QGeoAreaMonitorInfo.setExpiration(QDateTime)");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_setExpiration(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_setExpiration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            sipCpp->setExpiration(*a0);
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_setExpiration, doc_QGeoAreaMonitorInfo_setExpiration);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_isPersistent, "QGeoAreaMonitorInfo.isPersistent() -> bool");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_isPersistent(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_isPersistent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isPersistent();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_isPersistent, doc_QGeoAreaMonitorInfo_isPersistent);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_setPersistent, "QGeoAreaMonitorInfo.setPersistent(bool)");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_setPersistent(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_setPersistent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp, &a0))
        {
            sipCpp->setPersistent(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_setPersistent, doc_QGeoAreaMonitorInfo_setPersistent);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_notificationParameters, "QGeoAreaMonitorInfo.notificationParameters() -> dict-of-str-object");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_notificationParameters(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_notificationParameters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp))
        {
            QVariantMap*sipRes;

            sipRes = new QVariantMap(sipCpp->notificationParameters());

            return sipConvertFromNewType(sipRes,sipType_QMap_0100QString_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_notificationParameters, doc_QGeoAreaMonitorInfo_notificationParameters);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAreaMonitorInfo_setNotificationParameters, "QGeoAreaMonitorInfo.setNotificationParameters(dict-of-str-object)");

extern "C" {static PyObject *meth_QGeoAreaMonitorInfo_setNotificationParameters(PyObject *, PyObject *);}
static PyObject *meth_QGeoAreaMonitorInfo_setNotificationParameters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVariantMap* a0;
        int a0State = 0;
        QGeoAreaMonitorInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAreaMonitorInfo, &sipCpp, sipType_QMap_0100QString_0100QVariant,&a0, &a0State))
        {
            sipCpp->setNotificationParameters(*a0);
            sipReleaseType(const_cast<QVariantMap *>(a0),sipType_QMap_0100QString_0100QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAreaMonitorInfo, sipName_setNotificationParameters, doc_QGeoAreaMonitorInfo_setNotificationParameters);

    return NULL;
}


extern "C" {static PyObject *slot_QGeoAreaMonitorInfo___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoAreaMonitorInfo___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoAreaMonitorInfo *sipCpp = reinterpret_cast<QGeoAreaMonitorInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoAreaMonitorInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoAreaMonitorInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoAreaMonitorInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoAreaMonitorInfo::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,ne_slot,sipType_QGeoAreaMonitorInfo,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoAreaMonitorInfo___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoAreaMonitorInfo___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoAreaMonitorInfo *sipCpp = reinterpret_cast<QGeoAreaMonitorInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoAreaMonitorInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoAreaMonitorInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoAreaMonitorInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoAreaMonitorInfo::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,eq_slot,sipType_QGeoAreaMonitorInfo,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGeoAreaMonitorInfo(void *, const sipTypeDef *);}
static void *cast_QGeoAreaMonitorInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGeoAreaMonitorInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGeoAreaMonitorInfo(void *, int);}
static void release_QGeoAreaMonitorInfo(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoAreaMonitorInfo *>(sipCppV);
}


extern "C" {static void assign_QGeoAreaMonitorInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoAreaMonitorInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoAreaMonitorInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoAreaMonitorInfo *>(sipSrc);
}


extern "C" {static void *array_QGeoAreaMonitorInfo(SIP_SSIZE_T);}
static void *array_QGeoAreaMonitorInfo(SIP_SSIZE_T sipNrElem)
{
    return new QGeoAreaMonitorInfo[sipNrElem];
}


extern "C" {static void *copy_QGeoAreaMonitorInfo(const void *, SIP_SSIZE_T);}
static void *copy_QGeoAreaMonitorInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoAreaMonitorInfo(reinterpret_cast<const QGeoAreaMonitorInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoAreaMonitorInfo(sipSimpleWrapper *);}
static void dealloc_QGeoAreaMonitorInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoAreaMonitorInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoAreaMonitorInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoAreaMonitorInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoAreaMonitorInfo *sipCpp = 0;

    {
        const QString& a0def = QString();
        const QString* a0 = &a0def;
        int a0State = 0;

        static const char *sipKwdList[] = {
            sipName_name,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new QGeoAreaMonitorInfo(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QGeoAreaMonitorInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGeoAreaMonitorInfo, &a0))
        {
            sipCpp = new QGeoAreaMonitorInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoAreaMonitorInfo[] = {
    {(void *)slot_QGeoAreaMonitorInfo___ne__, ne_slot},
    {(void *)slot_QGeoAreaMonitorInfo___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGeoAreaMonitorInfo[] = {
    {SIP_MLNAME_CAST(sipName_area), meth_QGeoAreaMonitorInfo_area, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_area)},
    {SIP_MLNAME_CAST(sipName_expiration), meth_QGeoAreaMonitorInfo_expiration, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_expiration)},
    {SIP_MLNAME_CAST(sipName_identifier), meth_QGeoAreaMonitorInfo_identifier, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_identifier)},
    {SIP_MLNAME_CAST(sipName_isPersistent), meth_QGeoAreaMonitorInfo_isPersistent, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_isPersistent)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QGeoAreaMonitorInfo_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_isValid)},
    {SIP_MLNAME_CAST(sipName_name), meth_QGeoAreaMonitorInfo_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_name)},
    {SIP_MLNAME_CAST(sipName_notificationParameters), meth_QGeoAreaMonitorInfo_notificationParameters, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_notificationParameters)},
    {SIP_MLNAME_CAST(sipName_setArea), meth_QGeoAreaMonitorInfo_setArea, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_setArea)},
    {SIP_MLNAME_CAST(sipName_setExpiration), meth_QGeoAreaMonitorInfo_setExpiration, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_setExpiration)},
    {SIP_MLNAME_CAST(sipName_setName), meth_QGeoAreaMonitorInfo_setName, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_setName)},
    {SIP_MLNAME_CAST(sipName_setNotificationParameters), meth_QGeoAreaMonitorInfo_setNotificationParameters, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_setNotificationParameters)},
    {SIP_MLNAME_CAST(sipName_setPersistent), meth_QGeoAreaMonitorInfo_setPersistent, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAreaMonitorInfo_setPersistent)}
};

PyDoc_STRVAR(doc_QGeoAreaMonitorInfo, "\1QGeoAreaMonitorInfo(str name='')\n"
    "QGeoAreaMonitorInfo(QGeoAreaMonitorInfo)");


pyqt5ClassTypeDef sipTypeDef_QtPositioning_QGeoAreaMonitorInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoAreaMonitorInfo,
        {0}
    },
    {
        sipNameNr_QGeoAreaMonitorInfo,
        {0, 0, 1},
        12, methods_QGeoAreaMonitorInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoAreaMonitorInfo,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QGeoAreaMonitorInfo,
    init_type_QGeoAreaMonitorInfo,
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
    dealloc_QGeoAreaMonitorInfo,
    assign_QGeoAreaMonitorInfo,
    array_QGeoAreaMonitorInfo,
    copy_QGeoAreaMonitorInfo,
    release_QGeoAreaMonitorInfo,
    cast_QGeoAreaMonitorInfo,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};

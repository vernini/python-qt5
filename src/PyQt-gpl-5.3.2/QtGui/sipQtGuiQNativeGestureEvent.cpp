/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:17:45 2014
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

#include "sipAPIQtGui.h"

#line 811 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQNativeGestureEvent.cpp"

#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQNativeGestureEvent.cpp"
#line 99 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQNativeGestureEvent.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQNativeGestureEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQNativeGestureEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQNativeGestureEvent.cpp"


class sipQNativeGestureEvent : public QNativeGestureEvent
{
public:
    sipQNativeGestureEvent(Qt::NativeGestureType,const QPointF&,const QPointF&,const QPointF&,qreal,ulong,quint64);
    sipQNativeGestureEvent(const QNativeGestureEvent&);
    ~sipQNativeGestureEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQNativeGestureEvent(const sipQNativeGestureEvent &);
    sipQNativeGestureEvent &operator = (const sipQNativeGestureEvent &);
};

sipQNativeGestureEvent::sipQNativeGestureEvent(Qt::NativeGestureType a0,const QPointF& a1,const QPointF& a2,const QPointF& a3,qreal a4,ulong a5,quint64 a6): QNativeGestureEvent(a0,a1,a2,a3,a4,a5,a6), sipPySelf(0)
{
}

sipQNativeGestureEvent::sipQNativeGestureEvent(const QNativeGestureEvent& a0): QNativeGestureEvent(a0), sipPySelf(0)
{
}

sipQNativeGestureEvent::~sipQNativeGestureEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QNativeGestureEvent_gestureType, "QNativeGestureEvent.gestureType() -> Qt.NativeGestureType");

extern "C" {static PyObject *meth_QNativeGestureEvent_gestureType(PyObject *, PyObject *);}
static PyObject *meth_QNativeGestureEvent_gestureType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNativeGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNativeGestureEvent, &sipCpp))
        {
            Qt::NativeGestureType sipRes;

            sipRes = sipCpp->gestureType();

            return sipConvertFromEnum(sipRes,sipType_Qt_NativeGestureType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNativeGestureEvent, sipName_gestureType, doc_QNativeGestureEvent_gestureType);

    return NULL;
}


PyDoc_STRVAR(doc_QNativeGestureEvent_value, "QNativeGestureEvent.value() -> float");

extern "C" {static PyObject *meth_QNativeGestureEvent_value(PyObject *, PyObject *);}
static PyObject *meth_QNativeGestureEvent_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNativeGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNativeGestureEvent, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->value();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNativeGestureEvent, sipName_value, doc_QNativeGestureEvent_value);

    return NULL;
}


PyDoc_STRVAR(doc_QNativeGestureEvent_pos, "QNativeGestureEvent.pos() -> QPoint");

extern "C" {static PyObject *meth_QNativeGestureEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QNativeGestureEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNativeGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNativeGestureEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNativeGestureEvent, sipName_pos, doc_QNativeGestureEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QNativeGestureEvent_globalPos, "QNativeGestureEvent.globalPos() -> QPoint");

extern "C" {static PyObject *meth_QNativeGestureEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QNativeGestureEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNativeGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNativeGestureEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->globalPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNativeGestureEvent, sipName_globalPos, doc_QNativeGestureEvent_globalPos);

    return NULL;
}


PyDoc_STRVAR(doc_QNativeGestureEvent_localPos, "QNativeGestureEvent.localPos() -> QPointF");

extern "C" {static PyObject *meth_QNativeGestureEvent_localPos(PyObject *, PyObject *);}
static PyObject *meth_QNativeGestureEvent_localPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNativeGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNativeGestureEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->localPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNativeGestureEvent, sipName_localPos, doc_QNativeGestureEvent_localPos);

    return NULL;
}


PyDoc_STRVAR(doc_QNativeGestureEvent_windowPos, "QNativeGestureEvent.windowPos() -> QPointF");

extern "C" {static PyObject *meth_QNativeGestureEvent_windowPos(PyObject *, PyObject *);}
static PyObject *meth_QNativeGestureEvent_windowPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNativeGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNativeGestureEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->windowPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNativeGestureEvent, sipName_windowPos, doc_QNativeGestureEvent_windowPos);

    return NULL;
}


PyDoc_STRVAR(doc_QNativeGestureEvent_screenPos, "QNativeGestureEvent.screenPos() -> QPointF");

extern "C" {static PyObject *meth_QNativeGestureEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QNativeGestureEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNativeGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNativeGestureEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->screenPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNativeGestureEvent, sipName_screenPos, doc_QNativeGestureEvent_screenPos);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNativeGestureEvent(void *, const sipTypeDef *);}
static void *cast_QNativeGestureEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QNativeGestureEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QInputEvent)->ctd_cast((QInputEvent *)(QNativeGestureEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNativeGestureEvent(void *, int);}
static void release_QNativeGestureEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQNativeGestureEvent *>(sipCppV);
    else
        delete reinterpret_cast<QNativeGestureEvent *>(sipCppV);
}


extern "C" {static void dealloc_QNativeGestureEvent(sipSimpleWrapper *);}
static void dealloc_QNativeGestureEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQNativeGestureEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QNativeGestureEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QNativeGestureEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNativeGestureEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQNativeGestureEvent *sipCpp = 0;

    {
        Qt::NativeGestureType a0;
        const QPointF* a1;
        int a1State = 0;
        const QPointF* a2;
        int a2State = 0;
        const QPointF* a3;
        int a3State = 0;
        qreal a4;
        ulong a5;
        quint64 a6;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ1J1J1dmo", sipType_Qt_NativeGestureType, &a0, sipType_QPointF, &a1, &a1State, sipType_QPointF, &a2, &a2State, sipType_QPointF, &a3, &a3State, &a4, &a5, &a6))
        {
            sipCpp = new sipQNativeGestureEvent(a0,*a1,*a2,*a3,a4,a5,a6);
            sipReleaseType(const_cast<QPointF *>(a1),sipType_QPointF,a1State);
            sipReleaseType(const_cast<QPointF *>(a2),sipType_QPointF,a2State);
            sipReleaseType(const_cast<QPointF *>(a3),sipType_QPointF,a3State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QNativeGestureEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNativeGestureEvent, &a0))
        {
            sipCpp = new sipQNativeGestureEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QNativeGestureEvent[] = {{73, 255, 1}};


static PyMethodDef methods_QNativeGestureEvent[] = {
    {SIP_MLNAME_CAST(sipName_gestureType), meth_QNativeGestureEvent_gestureType, METH_VARARGS, SIP_MLDOC_CAST(doc_QNativeGestureEvent_gestureType)},
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QNativeGestureEvent_globalPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QNativeGestureEvent_globalPos)},
    {SIP_MLNAME_CAST(sipName_localPos), meth_QNativeGestureEvent_localPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QNativeGestureEvent_localPos)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QNativeGestureEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QNativeGestureEvent_pos)},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QNativeGestureEvent_screenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QNativeGestureEvent_screenPos)},
    {SIP_MLNAME_CAST(sipName_value), meth_QNativeGestureEvent_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QNativeGestureEvent_value)},
    {SIP_MLNAME_CAST(sipName_windowPos), meth_QNativeGestureEvent_windowPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QNativeGestureEvent_windowPos)}
};

PyDoc_STRVAR(doc_QNativeGestureEvent, "\1QNativeGestureEvent(Qt.NativeGestureType, QPointF, QPointF, QPointF, float, int, int)\n"
    "QNativeGestureEvent(QNativeGestureEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QNativeGestureEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QNativeGestureEvent,
        {0}
    },
    {
        sipNameNr_QNativeGestureEvent,
        {0, 0, 1},
        7, methods_QNativeGestureEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNativeGestureEvent,
    -1,
    -1,
    supers_QNativeGestureEvent,
    0,
    init_type_QNativeGestureEvent,
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
    dealloc_QNativeGestureEvent,
    0,
    0,
    0,
    release_QNativeGestureEvent,
    cast_QNativeGestureEvent,
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

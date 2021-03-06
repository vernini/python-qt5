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

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qdrag.sip"
#include <qdrag.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 26 "sip/QtCore/qmimedata.sip"
#include <qmimedata.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 66 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 69 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 72 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 75 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 78 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 84 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 87 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 90 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"


class sipQDrag : public QDrag
{
public:
    sipQDrag(QObject*);
    virtual ~sipQDrag();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QObject* sipProtect_sender() const;
    int sipProtect_receivers(const char*) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent*);
    void sipProtectVirt_childEvent(bool,QChildEvent*);
    void sipProtectVirt_customEvent(bool,QEvent*);
    void sipProtectVirt_connectNotify(bool,const QMetaMethod&);
    void sipProtectVirt_disconnectNotify(bool,const QMetaMethod&);
    int sipProtect_senderSignalIndex() const;
    bool sipProtect_isSignalConnected(const QMetaMethod&) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDrag(const sipQDrag &);
    sipQDrag &operator = (const sipQDrag &);

    char sipPyMethods[7];
};

sipQDrag::sipQDrag(QObject*a0): QDrag(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDrag::~sipQDrag()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtGui_qt_metaobject(sipPySelf,sipType_QDrag);
}

int sipQDrag::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QDrag::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QDrag,_c,_id,_a);

    return _id;
}

void *sipQDrag::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QDrag, _clname, &sipCpp) ? sipCpp : QDrag::qt_metacast(_clname));
}

void sipQDrag::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QDrag::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QDrag::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QDrag::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QDrag::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtGui_QtCore->em_virthandlers[47]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QDrag::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQDrag::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QDrag::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtGui_QtCore->em_virthandlers[26]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQDrag::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QDrag::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QObject* sipQDrag::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQDrag::sipProtect_receivers(const char*a0) const
{
    return QObject::receivers(a0);
}

void sipQDrag::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent*a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQDrag::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent*a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQDrag::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent*a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQDrag::sipProtectVirt_connectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQDrag::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipQDrag::sipProtect_senderSignalIndex() const
{
    return QObject::senderSignalIndex();
}

bool sipQDrag::sipProtect_isSignalConnected(const QMetaMethod& a0) const
{
    return QObject::isSignalConnected(a0);
}


PyDoc_STRVAR(doc_QDrag_sender, "QDrag.sender() -> QObject");

extern "C" {static PyObject *meth_QDrag_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QObject*sipRes = 0;

#line 540 "sip/QtCore/qobject.sip"
        // sender() must be called without the GIL to avoid possible deadlocks between
        // the GIL and Qt's internal thread data mutex.
        
        Py_BEGIN_ALLOW_THREADS
        
        #if defined(SIP_PROTECTED_IS_PUBLIC)
        sipRes = sipCpp->sender();
        #else
        sipRes = sipCpp->sipProtect_sender();
        #endif
        
        Py_END_ALLOW_THREADS
        
        if (!sipRes)
        {
            typedef QObject *(*qtcore_qobject_sender_t)();
        
            static qtcore_qobject_sender_t qtcore_qobject_sender = 0;
        
            if (!qtcore_qobject_sender)
                qtcore_qobject_sender = (qtcore_qobject_sender_t)sipImportSymbol("qtcore_qobject_sender");
        
            if (qtcore_qobject_sender)
                sipRes = qtcore_qobject_sender();
        }
#line 378 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_sender, doc_QDrag_sender);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_receivers, "QDrag.receivers(signal) -> int");

extern "C" {static PyObject *meth_QDrag_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        const sipQDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BP0", &sipSelf, sipType_QDrag, &sipCpp, &a0))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 569 "sip/QtCore/qobject.sip"
        // We need to handle the signal object.  Import the helper if it hasn't already
        // been done.
        typedef sipErrorState (*pyqt5_get_signal_signature_t)(PyObject *, const QObject *, const QByteArray &);
        
        static pyqt5_get_signal_signature_t pyqt5_get_signal_signature = 0;
        
        if (!pyqt5_get_signal_signature)
            pyqt5_get_signal_signature = (pyqt5_get_signal_signature_t)sipImportSymbol("pyqt5_get_signal_signature");
        
        if (pyqt5_get_signal_signature)
        {
            QByteArray signal_signature;
            
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            if ((sipError = pyqt5_get_signal_signature(a0, sipCpp, signal_signature)) == sipErrorNone)
            {
                sipRes = sipCpp->receivers(signal_signature.constData());
            }
        #else
            if ((sipError = pyqt5_get_signal_signature(a0, static_cast<const QObject *>(sipCpp), signal_signature)) == sipErrorNone)
            {
                sipRes = sipCpp->sipProtect_receivers(signal_signature.constData());
            }
        #endif
            else if (sipError == sipErrorContinue)
            {
                sipError = sipBadCallableArg(0, a0);
            }
        }
#line 437 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQDrag.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return SIPLong_FromLong(sipRes);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_receivers, doc_QDrag_receivers);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_timerEvent, "QDrag.timerEvent(QTimerEvent)");

extern "C" {static PyObject *meth_QDrag_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent* a0;
        sipQDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QDrag, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_timerEvent, doc_QDrag_timerEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_childEvent, "QDrag.childEvent(QChildEvent)");

extern "C" {static PyObject *meth_QDrag_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent* a0;
        sipQDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QDrag, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_childEvent, doc_QDrag_childEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_customEvent, "QDrag.customEvent(QEvent)");

extern "C" {static PyObject *meth_QDrag_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        sipQDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QDrag, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_customEvent, doc_QDrag_customEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_connectNotify, "QDrag.connectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QDrag_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QDrag, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_connectNotify, doc_QDrag_connectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_disconnectNotify, "QDrag.disconnectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QDrag_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QDrag, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_disconnectNotify, doc_QDrag_disconnectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_senderSignalIndex, "QDrag.senderSignalIndex() -> int");

extern "C" {static PyObject *meth_QDrag_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_senderSignalIndex, doc_QDrag_senderSignalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_isSignalConnected, "QDrag.isSignalConnected(QMetaMethod) -> bool");

extern "C" {static PyObject *meth_QDrag_isSignalConnected(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_isSignalConnected(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod* a0;
        const sipQDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QDrag, &sipCpp, sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_isSignalConnected(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_isSignalConnected, doc_QDrag_isSignalConnected);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_exec_, "QDrag.exec_(Qt.DropActions supportedActions=Qt.MoveAction) -> Qt.DropAction\n"
    "QDrag.exec_(Qt.DropActions, Qt.DropAction) -> Qt.DropAction");

extern "C" {static PyObject *meth_QDrag_exec_(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_exec_(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions a0def = Qt::MoveAction;
        Qt::DropActions* a0 = &a0def;
        int a0State = 0;
        QDrag *sipCpp;

        static const char *sipKwdList[] = {
            sipName_supportedActions,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropActions, &a0, &a0State))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exec(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    {
        Qt::DropActions* a0;
        int a0State = 0;
        Qt::DropAction a1;
        QDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1E", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropActions, &a0, &a0State, sipType_Qt_DropAction, &a1))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exec(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_exec_, doc_QDrag_exec_);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_exec, "QDrag.exec(Qt.DropActions, Qt.DropAction) -> Qt.DropAction");

extern "C" {static PyObject *meth_QDrag_exec(PyObject *, PyObject *);}
static PyObject *meth_QDrag_exec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions* a0;
        int a0State = 0;
        Qt::DropAction a1;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1E", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropActions, &a0, &a0State, sipType_Qt_DropAction, &a1))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exec(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_exec, doc_QDrag_exec);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setMimeData, "QDrag.setMimeData(QMimeData)");

extern "C" {static PyObject *meth_QDrag_setMimeData(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setMimeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMimeData* a0;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QDrag, &sipCpp, sipType_QMimeData, &a0))
        {
            sipCpp->setMimeData(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setMimeData, doc_QDrag_setMimeData);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_mimeData, "QDrag.mimeData() -> QMimeData");

extern "C" {static PyObject *meth_QDrag_mimeData(PyObject *, PyObject *);}
static PyObject *meth_QDrag_mimeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QMimeData*sipRes;

            sipRes = sipCpp->mimeData();

            return sipConvertFromType(sipRes,sipType_QMimeData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_mimeData, doc_QDrag_mimeData);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setPixmap, "QDrag.setPixmap(QPixmap)");

extern "C" {static PyObject *meth_QDrag_setPixmap(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setPixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixmap* a0;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDrag, &sipCpp, sipType_QPixmap, &a0))
        {
            sipCpp->setPixmap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setPixmap, doc_QDrag_setPixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_pixmap, "QDrag.pixmap() -> QPixmap");

extern "C" {static PyObject *meth_QDrag_pixmap(PyObject *, PyObject *);}
static PyObject *meth_QDrag_pixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QPixmap*sipRes;

            sipRes = new QPixmap(sipCpp->pixmap());

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_pixmap, doc_QDrag_pixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setHotSpot, "QDrag.setHotSpot(QPoint)");

extern "C" {static PyObject *meth_QDrag_setHotSpot(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setHotSpot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPoint* a0;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDrag, &sipCpp, sipType_QPoint, &a0))
        {
            sipCpp->setHotSpot(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setHotSpot, doc_QDrag_setHotSpot);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_hotSpot, "QDrag.hotSpot() -> QPoint");

extern "C" {static PyObject *meth_QDrag_hotSpot(PyObject *, PyObject *);}
static PyObject *meth_QDrag_hotSpot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->hotSpot());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_hotSpot, doc_QDrag_hotSpot);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_source, "QDrag.source() -> QObject");

extern "C" {static PyObject *meth_QDrag_source(PyObject *, PyObject *);}
static PyObject *meth_QDrag_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->source();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_source, doc_QDrag_source);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_target, "QDrag.target() -> QObject");

extern "C" {static PyObject *meth_QDrag_target(PyObject *, PyObject *);}
static PyObject *meth_QDrag_target(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->target();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_target, doc_QDrag_target);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setDragCursor, "QDrag.setDragCursor(QPixmap, Qt.DropAction)");

extern "C" {static PyObject *meth_QDrag_setDragCursor(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setDragCursor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixmap* a0;
        Qt::DropAction a1;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9E", &sipSelf, sipType_QDrag, &sipCpp, sipType_QPixmap, &a0, sipType_Qt_DropAction, &a1))
        {
            sipCpp->setDragCursor(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setDragCursor, doc_QDrag_setDragCursor);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_dragCursor, "QDrag.dragCursor(Qt.DropAction) -> QPixmap");

extern "C" {static PyObject *meth_QDrag_dragCursor(PyObject *, PyObject *);}
static PyObject *meth_QDrag_dragCursor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropAction a0;
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropAction, &a0))
        {
            QPixmap*sipRes;

            sipRes = new QPixmap(sipCpp->dragCursor(a0));

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_dragCursor, doc_QDrag_dragCursor);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_supportedActions, "QDrag.supportedActions() -> Qt.DropActions");

extern "C" {static PyObject *meth_QDrag_supportedActions(PyObject *, PyObject *);}
static PyObject *meth_QDrag_supportedActions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            Qt::DropActions*sipRes;

            sipRes = new Qt::DropActions(sipCpp->supportedActions());

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_supportedActions, doc_QDrag_supportedActions);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_defaultAction, "QDrag.defaultAction() -> Qt.DropAction");

extern "C" {static PyObject *meth_QDrag_defaultAction(PyObject *, PyObject *);}
static PyObject *meth_QDrag_defaultAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            Qt::DropAction sipRes;

            sipRes = sipCpp->defaultAction();

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_defaultAction, doc_QDrag_defaultAction);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDrag(void *, const sipTypeDef *);}
static void *cast_QDrag(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDrag)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QDrag *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDrag(void *, int);}
static void release_QDrag(void *sipCppV,int)
{
    QDrag *sipCpp = reinterpret_cast<QDrag *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QDrag(sipSimpleWrapper *);}
static void dealloc_QDrag(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDrag *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDrag(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDrag(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDrag(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQDrag *sipCpp = 0;

    {
        QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQDrag(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDrag[] = {{160, 0, 1}};


static PyMethodDef methods_QDrag[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_QDrag_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_QDrag_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_QDrag_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_defaultAction), meth_QDrag_defaultAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_defaultAction)},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_QDrag_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_dragCursor), meth_QDrag_dragCursor, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_dragCursor)},
    {SIP_MLNAME_CAST(sipName_exec), meth_QDrag_exec, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_exec)},
    {SIP_MLNAME_CAST(sipName_exec_), (PyCFunction)meth_QDrag_exec_, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDrag_exec_)},
    {SIP_MLNAME_CAST(sipName_hotSpot), meth_QDrag_hotSpot, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_hotSpot)},
    {SIP_MLNAME_CAST(sipName_isSignalConnected), (PyCFunction)meth_QDrag_isSignalConnected, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_mimeData), meth_QDrag_mimeData, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_mimeData)},
    {SIP_MLNAME_CAST(sipName_pixmap), meth_QDrag_pixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_pixmap)},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_QDrag_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_QDrag_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_QDrag_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setDragCursor), meth_QDrag_setDragCursor, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setDragCursor)},
    {SIP_MLNAME_CAST(sipName_setHotSpot), meth_QDrag_setHotSpot, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setHotSpot)},
    {SIP_MLNAME_CAST(sipName_setMimeData), meth_QDrag_setMimeData, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setMimeData)},
    {SIP_MLNAME_CAST(sipName_setPixmap), meth_QDrag_setPixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setPixmap)},
    {SIP_MLNAME_CAST(sipName_source), meth_QDrag_source, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_source)},
    {SIP_MLNAME_CAST(sipName_supportedActions), meth_QDrag_supportedActions, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_supportedActions)},
    {SIP_MLNAME_CAST(sipName_target), meth_QDrag_target, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_target)},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_QDrag_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL}
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QDrag[] = {
    {"targetChanged(QObject*)", "\1QDrag.targetChanged[QObject]", 0, 0},
    {"actionChanged(Qt::DropAction)", "\1QDrag.actionChanged[Qt.DropAction]", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QDrag, "\1QDrag(QObject)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QDrag = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDrag,
        {0}
    },
    {
        sipNameNr_QDrag,
        {0, 0, 1},
        23, methods_QDrag,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDrag,
    -1,
    -1,
    supers_QDrag,
    0,
    init_type_QDrag,
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
    dealloc_QDrag,
    0,
    0,
    0,
    release_QDrag,
    cast_QDrag,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QDrag::staticMetaObject,
    0,
    signals_QDrag,
    0
};

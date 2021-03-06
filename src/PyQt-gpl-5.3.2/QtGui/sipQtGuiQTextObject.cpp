/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:17:44 2014
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

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"

#line 40 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"


class sipQTextObject : public QTextObject
{
public:
    sipQTextObject(QTextDocument*);
    virtual ~sipQTextObject();

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
    void sipProtect_setFormat(const QTextFormat&);

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
    sipQTextObject(const sipQTextObject &);
    sipQTextObject &operator = (const sipQTextObject &);

    char sipPyMethods[7];
};

sipQTextObject::sipQTextObject(QTextDocument*a0): QTextObject(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTextObject::~sipQTextObject()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQTextObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtGui_qt_metaobject(sipPySelf,sipType_QTextObject);
}

int sipQTextObject::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QTextObject::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QTextObject,_c,_id,_a);

    return _id;
}

void *sipQTextObject::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QTextObject, _clname, &sipCpp) ? sipCpp : QTextObject::qt_metacast(_clname));
}

void sipQTextObject::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QTextObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTextObject::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QTextObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTextObject::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QTextObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTextObject::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QTextObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtGui_QtCore->em_virthandlers[47]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTextObject::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QTextObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQTextObject::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QTextObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtGui_QtCore->em_virthandlers[26]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQTextObject::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QTextObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QObject* sipQTextObject::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQTextObject::sipProtect_receivers(const char*a0) const
{
    return QObject::receivers(a0);
}

void sipQTextObject::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent*a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQTextObject::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent*a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQTextObject::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent*a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQTextObject::sipProtectVirt_connectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQTextObject::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipQTextObject::sipProtect_senderSignalIndex() const
{
    return QObject::senderSignalIndex();
}

bool sipQTextObject::sipProtect_isSignalConnected(const QMetaMethod& a0) const
{
    return QObject::isSignalConnected(a0);
}

void sipQTextObject::sipProtect_setFormat(const QTextFormat& a0)
{
    QTextObject::setFormat(a0);
}


PyDoc_STRVAR(doc_QTextObject_sender, "QTextObject.sender() -> QObject");

extern "C" {static PyObject *meth_QTextObject_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextObject_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQTextObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QTextObject, &sipCpp))
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
#line 378 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_sender, doc_QTextObject_sender);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_receivers, "QTextObject.receivers(signal) -> int");

extern "C" {static PyObject *meth_QTextObject_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextObject_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        const sipQTextObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BP0", &sipSelf, sipType_QTextObject, &sipCpp, &a0))
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
#line 437 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObject.cpp"

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
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_receivers, doc_QTextObject_receivers);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_timerEvent, "QTextObject.timerEvent(QTimerEvent)");

extern "C" {static PyObject *meth_QTextObject_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextObject_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent* a0;
        sipQTextObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QTextObject, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_timerEvent, doc_QTextObject_timerEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_childEvent, "QTextObject.childEvent(QChildEvent)");

extern "C" {static PyObject *meth_QTextObject_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextObject_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent* a0;
        sipQTextObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QTextObject, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_childEvent, doc_QTextObject_childEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_customEvent, "QTextObject.customEvent(QEvent)");

extern "C" {static PyObject *meth_QTextObject_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextObject_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        sipQTextObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QTextObject, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_customEvent, doc_QTextObject_customEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_connectNotify, "QTextObject.connectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QTextObject_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextObject_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQTextObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QTextObject, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_connectNotify, doc_QTextObject_connectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_disconnectNotify, "QTextObject.disconnectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QTextObject_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextObject_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQTextObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QTextObject, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_disconnectNotify, doc_QTextObject_disconnectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_senderSignalIndex, "QTextObject.senderSignalIndex() -> int");

extern "C" {static PyObject *meth_QTextObject_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextObject_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQTextObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QTextObject, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_senderSignalIndex, doc_QTextObject_senderSignalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_isSignalConnected, "QTextObject.isSignalConnected(QMetaMethod) -> bool");

extern "C" {static PyObject *meth_QTextObject_isSignalConnected(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextObject_isSignalConnected(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod* a0;
        const sipQTextObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QTextObject, &sipCpp, sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_isSignalConnected(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_isSignalConnected, doc_QTextObject_isSignalConnected);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_setFormat, "QTextObject.setFormat(QTextFormat)");

extern "C" {static PyObject *meth_QTextObject_setFormat(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextObject_setFormat(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFormat* a0;
        sipQTextObject *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QTextObject, &sipCpp, sipType_QTextFormat, &a0))
        {
            sipCpp->sipProtect_setFormat(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_setFormat, doc_QTextObject_setFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_format, "QTextObject.format() -> QTextFormat");

extern "C" {static PyObject *meth_QTextObject_format(PyObject *, PyObject *);}
static PyObject *meth_QTextObject_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextObject, &sipCpp))
        {
            QTextFormat*sipRes;

            sipRes = new QTextFormat(sipCpp->format());

            return sipConvertFromNewType(sipRes,sipType_QTextFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_format, doc_QTextObject_format);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_formatIndex, "QTextObject.formatIndex() -> int");

extern "C" {static PyObject *meth_QTextObject_formatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextObject_formatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextObject, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->formatIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_formatIndex, doc_QTextObject_formatIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_document, "QTextObject.document() -> QTextDocument");

extern "C" {static PyObject *meth_QTextObject_document(PyObject *, PyObject *);}
static PyObject *meth_QTextObject_document(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextObject, &sipCpp))
        {
            QTextDocument*sipRes;

            sipRes = sipCpp->document();

            return sipConvertFromType(sipRes,sipType_QTextDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_document, doc_QTextObject_document);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_objectIndex, "QTextObject.objectIndex() -> int");

extern "C" {static PyObject *meth_QTextObject_objectIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextObject_objectIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextObject, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->objectIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_objectIndex, doc_QTextObject_objectIndex);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextObject(void *, const sipTypeDef *);}
static void *cast_QTextObject(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTextObject)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QTextObject *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextObject(void *, int);}
static void release_QTextObject(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTextObject *>(sipCppV);
}


extern "C" {static void dealloc_QTextObject(sipSimpleWrapper *);}
static void dealloc_QTextObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTextObject *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTextObject(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QTextObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextObject(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTextObject *sipCpp = 0;

    {
        QTextDocument* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QTextDocument, &a0))
        {
            sipCpp = new sipQTextObject(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTextObject[] = {{160, 0, 1}};


static PyMethodDef methods_QTextObject[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_QTextObject_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_QTextObject_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_QTextObject_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_QTextObject_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_document), meth_QTextObject_document, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextObject_document)},
    {SIP_MLNAME_CAST(sipName_format), meth_QTextObject_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextObject_format)},
    {SIP_MLNAME_CAST(sipName_formatIndex), meth_QTextObject_formatIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextObject_formatIndex)},
    {SIP_MLNAME_CAST(sipName_isSignalConnected), (PyCFunction)meth_QTextObject_isSignalConnected, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_objectIndex), meth_QTextObject_objectIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextObject_objectIndex)},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_QTextObject_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_QTextObject_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_QTextObject_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setFormat), (PyCFunction)meth_QTextObject_setFormat, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTextObject_setFormat)},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_QTextObject_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL}
};

PyDoc_STRVAR(doc_QTextObject, "\1QTextObject(QTextDocument)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QTextObject = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTextObject,
        {0}
    },
    {
        sipNameNr_QTextObject,
        {0, 0, 1},
        14, methods_QTextObject,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextObject,
    -1,
    -1,
    supers_QTextObject,
    0,
    init_type_QTextObject,
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
    dealloc_QTextObject,
    0,
    0,
    0,
    release_QTextObject,
    cast_QTextObject,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QTextObject::staticMetaObject,
    0,
    0,
    0
};

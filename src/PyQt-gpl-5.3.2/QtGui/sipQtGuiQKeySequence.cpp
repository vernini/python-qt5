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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qkeysequence.sip"
#include <qkeysequence.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQKeySequence.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQKeySequence.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQKeySequence.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQKeySequence.cpp"


PyDoc_STRVAR(doc_QKeySequence_count, "QKeySequence.count() -> int");

extern "C" {static PyObject *meth_QKeySequence_count(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeySequence, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->count();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_count, doc_QKeySequence_count);

    return NULL;
}


PyDoc_STRVAR(doc_QKeySequence_isEmpty, "QKeySequence.isEmpty() -> bool");

extern "C" {static PyObject *meth_QKeySequence_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeySequence, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_isEmpty, doc_QKeySequence_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QKeySequence_matches, "QKeySequence.matches(QKeySequence) -> QKeySequence.SequenceMatch");

extern "C" {static PyObject *meth_QKeySequence_matches(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_matches(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QKeySequence* a0;
        int a0State = 0;
        const QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QKeySequence, &sipCpp, sipType_QKeySequence, &a0, &a0State))
        {
            QKeySequence::SequenceMatch sipRes;

            sipRes = sipCpp->matches(*a0);
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return sipConvertFromEnum(sipRes,sipType_QKeySequence_SequenceMatch);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_matches, doc_QKeySequence_matches);

    return NULL;
}


PyDoc_STRVAR(doc_QKeySequence_mnemonic, "QKeySequence.mnemonic(str) -> QKeySequence");

extern "C" {static PyObject *meth_QKeySequence_mnemonic(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_mnemonic(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QKeySequence*sipRes;

            sipRes = new QKeySequence(QKeySequence::mnemonic(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_mnemonic, doc_QKeySequence_mnemonic);

    return NULL;
}


PyDoc_STRVAR(doc_QKeySequence_isDetached, "QKeySequence.isDetached() -> bool");

extern "C" {static PyObject *meth_QKeySequence_isDetached(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_isDetached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeySequence, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDetached();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_isDetached, doc_QKeySequence_isDetached);

    return NULL;
}


PyDoc_STRVAR(doc_QKeySequence_swap, "QKeySequence.swap(QKeySequence)");

extern "C" {static PyObject *meth_QKeySequence_swap(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeySequence* a0;
        int a0State = 0;
        QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QKeySequence, &sipCpp, sipType_QKeySequence, &a0, &a0State))
        {
            sipCpp->swap(*a0);
            sipReleaseType(a0,sipType_QKeySequence,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_swap, doc_QKeySequence_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QKeySequence_toString, "QKeySequence.toString(QKeySequence.SequenceFormat format=QKeySequence.PortableText) -> str");

extern "C" {static PyObject *meth_QKeySequence_toString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_toString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QKeySequence::SequenceFormat a0 = QKeySequence::PortableText;
        const QKeySequence *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QKeySequence, &sipCpp, sipType_QKeySequence_SequenceFormat, &a0))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->toString(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_toString, doc_QKeySequence_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QKeySequence_fromString, "QKeySequence.fromString(str, QKeySequence.SequenceFormat format=QKeySequence.PortableText) -> QKeySequence");

extern "C" {static PyObject *meth_QKeySequence_fromString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_fromString(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QKeySequence::SequenceFormat a1 = QKeySequence::PortableText;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|E", sipType_QString,&a0, &a0State, sipType_QKeySequence_SequenceFormat, &a1))
        {
            QKeySequence*sipRes;

            sipRes = new QKeySequence(QKeySequence::fromString(*a0,a1));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_fromString, doc_QKeySequence_fromString);

    return NULL;
}


PyDoc_STRVAR(doc_QKeySequence_keyBindings, "QKeySequence.keyBindings(QKeySequence.StandardKey) -> list-of-QKeySequence");

extern "C" {static PyObject *meth_QKeySequence_keyBindings(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_keyBindings(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeySequence::StandardKey a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QKeySequence_StandardKey, &a0))
        {
            QList<QKeySequence>*sipRes;

            sipRes = new QList<QKeySequence>(QKeySequence::keyBindings(a0));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_keyBindings, doc_QKeySequence_keyBindings);

    return NULL;
}


PyDoc_STRVAR(doc_QKeySequence_listFromString, "QKeySequence.listFromString(str, QKeySequence.SequenceFormat format=QKeySequence.PortableText) -> list-of-QKeySequence");

extern "C" {static PyObject *meth_QKeySequence_listFromString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_listFromString(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QKeySequence::SequenceFormat a1 = QKeySequence::PortableText;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|E", sipType_QString,&a0, &a0State, sipType_QKeySequence_SequenceFormat, &a1))
        {
            QList<QKeySequence>*sipRes;

            sipRes = new QList<QKeySequence>(QKeySequence::listFromString(*a0,a1));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_listFromString, doc_QKeySequence_listFromString);

    return NULL;
}


PyDoc_STRVAR(doc_QKeySequence_listToString, "QKeySequence.listToString(list-of-QKeySequence, QKeySequence.SequenceFormat format=QKeySequence.PortableText) -> str");

extern "C" {static PyObject *meth_QKeySequence_listToString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_listToString(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QList<QKeySequence>* a0;
        int a0State = 0;
        QKeySequence::SequenceFormat a1 = QKeySequence::PortableText;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|E", sipType_QList_0100QKeySequence,&a0, &a0State, sipType_QKeySequence_SequenceFormat, &a1))
        {
            QString*sipRes;

            sipRes = new QString(QKeySequence::listToString(*a0,a1));
            sipReleaseType(const_cast<QList<QKeySequence> *>(a0),sipType_QList_0100QKeySequence,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_listToString, doc_QKeySequence_listToString);

    return NULL;
}


extern "C" {static PyObject *slot_QKeySequence___ge__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->QKeySequence::operator>=(*a0);
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ge_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___le__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___le__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->QKeySequence::operator<=(*a0);
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,le_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___gt__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->QKeySequence::operator>(*a0);
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,gt_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___lt__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->QKeySequence::operator<(*a0);
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,lt_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___ne__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->QKeySequence::operator!=(*a0);
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___eq__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->QKeySequence::operator==(*a0);
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            int sipRes = 0;
            int sipIsErr = 0;

#line 205 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qkeysequence.sip"
        SIP_SSIZE_T idx = sipConvertFromSequenceIndex(a0, sipCpp->count());
        
        if (idx < 0)
            sipIsErr = 1;
        else
            sipRes = sipCpp->operator[]((uint)idx);
#line 604 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQKeySequence.cpp"

            if (sipIsErr)
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static SIP_SSIZE_T slot_QKeySequence___len__(PyObject *);}
static SIP_SSIZE_T slot_QKeySequence___len__(PyObject *sipSelf)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 635 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQKeySequence.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QKeySequence(void *, const sipTypeDef *);}
static void *cast_QKeySequence(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QKeySequence)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QKeySequence(void *, int);}
static void release_QKeySequence(void *sipCppV,int)
{
    delete reinterpret_cast<QKeySequence *>(sipCppV);
}


extern "C" {static PyObject *pickle_QKeySequence(void *);}
static PyObject *pickle_QKeySequence(void *sipCppV)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipCppV);
    PyObject *sipRes;

#line 95 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qkeysequence.sip"
    sipRes = Py_BuildValue((char *)"iiii", sipCpp->operator[](0), sipCpp->operator[](1), sipCpp->operator[](2), sipCpp->operator[](3));
#line 672 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQKeySequence.cpp"

    return sipRes;
}


extern "C" {static void assign_QKeySequence(void *, SIP_SSIZE_T, const void *);}
static void assign_QKeySequence(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QKeySequence *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QKeySequence *>(sipSrc);
}


extern "C" {static void *array_QKeySequence(SIP_SSIZE_T);}
static void *array_QKeySequence(SIP_SSIZE_T sipNrElem)
{
    return new QKeySequence[sipNrElem];
}


extern "C" {static void *copy_QKeySequence(const void *, SIP_SSIZE_T);}
static void *copy_QKeySequence(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QKeySequence(reinterpret_cast<const QKeySequence *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QKeySequence(sipSimpleWrapper *);}
static void dealloc_QKeySequence(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QKeySequence(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QKeySequence(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QKeySequence(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QKeySequence *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QKeySequence();

            return sipCpp;
        }
    }

    {
        const QKeySequence* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QKeySequence, &a0, &a0State))
        {
            sipCpp = new QKeySequence(*a0);
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QKeySequence::SequenceFormat a1 = QKeySequence::NativeText;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|E", sipType_QString,&a0, &a0State, sipType_QKeySequence_SequenceFormat, &a1))
        {
            sipCpp = new QKeySequence(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        int a0;
        int a1 = 0;
        int a2 = 0;
        int a3 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_key2,
            sipName_key3,
            sipName_key4,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "i|iii", &a0, &a1, &a2, &a3))
        {
            sipCpp = new QKeySequence(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const QVariant* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QVariant, &a0, &a0State))
        {
#line 195 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qkeysequence.sip"
        sipCpp = new QKeySequence(a0->value<QKeySequence>());
#line 784 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQKeySequence.cpp"
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QKeySequence(PyObject *, void **, int *, PyObject *);}
static int convertTo_QKeySequence(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QKeySequence **sipCppPtr = reinterpret_cast<QKeySequence **>(sipCppPtrV);

#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qkeysequence.sip"
// Allow a StandardKey, QString or an integer whenever a QKeySequence is
// expected.

if (sipIsErr == NULL)
{
    if (sipCanConvertToType(sipPy, sipType_QKeySequence, SIP_NO_CONVERTORS))
        return 1;

    if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QKeySequence_StandardKey)))
        return 1;

    if (sipCanConvertToType(sipPy, sipType_QString, 0))
        return 1;

    PyErr_Clear();

    SIPLong_AsLong(sipPy);

    return !PyErr_Occurred();
}

if (sipCanConvertToType(sipPy, sipType_QKeySequence, SIP_NO_CONVERTORS))
{
    *sipCppPtr = reinterpret_cast<QKeySequence *>(sipConvertToType(sipPy, sipType_QKeySequence, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

    return 0;
}

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QKeySequence_StandardKey)))
{
    *sipCppPtr = new QKeySequence((QKeySequence::StandardKey)SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

if (sipCanConvertToType(sipPy, sipType_QString, 0))
{
    int state;
    QString *qs = reinterpret_cast<QString *>(sipConvertToType(sipPy, sipType_QString, 0, 0, &state, sipIsErr));

    if (*sipIsErr)
    {
        sipReleaseType(qs, sipType_QString, state);
        return 0;
    }

    *sipCppPtr = new QKeySequence(*qs);

    sipReleaseType(qs, sipType_QString, state);

    return sipGetState(sipTransferObj);
}

int key = SIPLong_AsLong(sipPy);

*sipCppPtr = new QKeySequence(key);

return sipGetState(sipTransferObj);
#line 859 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQKeySequence.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QKeySequence[] = {
    {(void *)slot_QKeySequence___ge__, ge_slot},
    {(void *)slot_QKeySequence___le__, le_slot},
    {(void *)slot_QKeySequence___gt__, gt_slot},
    {(void *)slot_QKeySequence___lt__, lt_slot},
    {(void *)slot_QKeySequence___ne__, ne_slot},
    {(void *)slot_QKeySequence___eq__, eq_slot},
    {(void *)slot_QKeySequence___getitem__, getitem_slot},
    {(void *)slot_QKeySequence___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QKeySequence[] = {
    {SIP_MLNAME_CAST(sipName_count), meth_QKeySequence_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeySequence_count)},
    {SIP_MLNAME_CAST(sipName_fromString), (PyCFunction)meth_QKeySequence_fromString, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QKeySequence_fromString)},
    {SIP_MLNAME_CAST(sipName_isDetached), meth_QKeySequence_isDetached, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeySequence_isDetached)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QKeySequence_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeySequence_isEmpty)},
    {SIP_MLNAME_CAST(sipName_keyBindings), meth_QKeySequence_keyBindings, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeySequence_keyBindings)},
    {SIP_MLNAME_CAST(sipName_listFromString), (PyCFunction)meth_QKeySequence_listFromString, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QKeySequence_listFromString)},
    {SIP_MLNAME_CAST(sipName_listToString), (PyCFunction)meth_QKeySequence_listToString, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QKeySequence_listToString)},
    {SIP_MLNAME_CAST(sipName_matches), meth_QKeySequence_matches, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeySequence_matches)},
    {SIP_MLNAME_CAST(sipName_mnemonic), meth_QKeySequence_mnemonic, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeySequence_mnemonic)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QKeySequence_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeySequence_swap)},
    {SIP_MLNAME_CAST(sipName_toString), (PyCFunction)meth_QKeySequence_toString, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QKeySequence_toString)}
};

static sipEnumMemberDef enummembers_QKeySequence[] = {
    {sipName_AddTab, static_cast<int>(QKeySequence::AddTab), 85},
    {sipName_Back, static_cast<int>(QKeySequence::Back), 85},
    {sipName_Bold, static_cast<int>(QKeySequence::Bold), 85},
    {sipName_Close, static_cast<int>(QKeySequence::Close), 85},
    {sipName_Copy, static_cast<int>(QKeySequence::Copy), 85},
    {sipName_Cut, static_cast<int>(QKeySequence::Cut), 85},
    {sipName_Delete, static_cast<int>(QKeySequence::Delete), 85},
    {sipName_DeleteCompleteLine, static_cast<int>(QKeySequence::DeleteCompleteLine), 85},
    {sipName_DeleteEndOfLine, static_cast<int>(QKeySequence::DeleteEndOfLine), 85},
    {sipName_DeleteEndOfWord, static_cast<int>(QKeySequence::DeleteEndOfWord), 85},
    {sipName_DeleteStartOfWord, static_cast<int>(QKeySequence::DeleteStartOfWord), 85},
    {sipName_Deselect, static_cast<int>(QKeySequence::Deselect), 85},
    {sipName_ExactMatch, static_cast<int>(QKeySequence::ExactMatch), 84},
    {sipName_Find, static_cast<int>(QKeySequence::Find), 85},
    {sipName_FindNext, static_cast<int>(QKeySequence::FindNext), 85},
    {sipName_FindPrevious, static_cast<int>(QKeySequence::FindPrevious), 85},
    {sipName_Forward, static_cast<int>(QKeySequence::Forward), 85},
    {sipName_FullScreen, static_cast<int>(QKeySequence::FullScreen), 85},
    {sipName_HelpContents, static_cast<int>(QKeySequence::HelpContents), 85},
    {sipName_InsertLineSeparator, static_cast<int>(QKeySequence::InsertLineSeparator), 85},
    {sipName_InsertParagraphSeparator, static_cast<int>(QKeySequence::InsertParagraphSeparator), 85},
    {sipName_Italic, static_cast<int>(QKeySequence::Italic), 85},
    {sipName_MoveToEndOfBlock, static_cast<int>(QKeySequence::MoveToEndOfBlock), 85},
    {sipName_MoveToEndOfDocument, static_cast<int>(QKeySequence::MoveToEndOfDocument), 85},
    {sipName_MoveToEndOfLine, static_cast<int>(QKeySequence::MoveToEndOfLine), 85},
    {sipName_MoveToNextChar, static_cast<int>(QKeySequence::MoveToNextChar), 85},
    {sipName_MoveToNextLine, static_cast<int>(QKeySequence::MoveToNextLine), 85},
    {sipName_MoveToNextPage, static_cast<int>(QKeySequence::MoveToNextPage), 85},
    {sipName_MoveToNextWord, static_cast<int>(QKeySequence::MoveToNextWord), 85},
    {sipName_MoveToPreviousChar, static_cast<int>(QKeySequence::MoveToPreviousChar), 85},
    {sipName_MoveToPreviousLine, static_cast<int>(QKeySequence::MoveToPreviousLine), 85},
    {sipName_MoveToPreviousPage, static_cast<int>(QKeySequence::MoveToPreviousPage), 85},
    {sipName_MoveToPreviousWord, static_cast<int>(QKeySequence::MoveToPreviousWord), 85},
    {sipName_MoveToStartOfBlock, static_cast<int>(QKeySequence::MoveToStartOfBlock), 85},
    {sipName_MoveToStartOfDocument, static_cast<int>(QKeySequence::MoveToStartOfDocument), 85},
    {sipName_MoveToStartOfLine, static_cast<int>(QKeySequence::MoveToStartOfLine), 85},
    {sipName_NativeText, static_cast<int>(QKeySequence::NativeText), 83},
    {sipName_New, static_cast<int>(QKeySequence::New), 85},
    {sipName_NextChild, static_cast<int>(QKeySequence::NextChild), 85},
    {sipName_NoMatch, static_cast<int>(QKeySequence::NoMatch), 84},
    {sipName_Open, static_cast<int>(QKeySequence::Open), 85},
    {sipName_PartialMatch, static_cast<int>(QKeySequence::PartialMatch), 84},
    {sipName_Paste, static_cast<int>(QKeySequence::Paste), 85},
    {sipName_PortableText, static_cast<int>(QKeySequence::PortableText), 83},
    {sipName_Preferences, static_cast<int>(QKeySequence::Preferences), 85},
    {sipName_PreviousChild, static_cast<int>(QKeySequence::PreviousChild), 85},
    {sipName_Print, static_cast<int>(QKeySequence::Print), 85},
    {sipName_Quit, static_cast<int>(QKeySequence::Quit), 85},
    {sipName_Redo, static_cast<int>(QKeySequence::Redo), 85},
    {sipName_Refresh, static_cast<int>(QKeySequence::Refresh), 85},
    {sipName_Replace, static_cast<int>(QKeySequence::Replace), 85},
    {sipName_Save, static_cast<int>(QKeySequence::Save), 85},
    {sipName_SaveAs, static_cast<int>(QKeySequence::SaveAs), 85},
    {sipName_SelectAll, static_cast<int>(QKeySequence::SelectAll), 85},
    {sipName_SelectEndOfBlock, static_cast<int>(QKeySequence::SelectEndOfBlock), 85},
    {sipName_SelectEndOfDocument, static_cast<int>(QKeySequence::SelectEndOfDocument), 85},
    {sipName_SelectEndOfLine, static_cast<int>(QKeySequence::SelectEndOfLine), 85},
    {sipName_SelectNextChar, static_cast<int>(QKeySequence::SelectNextChar), 85},
    {sipName_SelectNextLine, static_cast<int>(QKeySequence::SelectNextLine), 85},
    {sipName_SelectNextPage, static_cast<int>(QKeySequence::SelectNextPage), 85},
    {sipName_SelectNextWord, static_cast<int>(QKeySequence::SelectNextWord), 85},
    {sipName_SelectPreviousChar, static_cast<int>(QKeySequence::SelectPreviousChar), 85},
    {sipName_SelectPreviousLine, static_cast<int>(QKeySequence::SelectPreviousLine), 85},
    {sipName_SelectPreviousPage, static_cast<int>(QKeySequence::SelectPreviousPage), 85},
    {sipName_SelectPreviousWord, static_cast<int>(QKeySequence::SelectPreviousWord), 85},
    {sipName_SelectStartOfBlock, static_cast<int>(QKeySequence::SelectStartOfBlock), 85},
    {sipName_SelectStartOfDocument, static_cast<int>(QKeySequence::SelectStartOfDocument), 85},
    {sipName_SelectStartOfLine, static_cast<int>(QKeySequence::SelectStartOfLine), 85},
    {sipName_Underline, static_cast<int>(QKeySequence::Underline), 85},
    {sipName_Undo, static_cast<int>(QKeySequence::Undo), 85},
    {sipName_UnknownKey, static_cast<int>(QKeySequence::UnknownKey), 85},
    {sipName_WhatsThis, static_cast<int>(QKeySequence::WhatsThis), 85},
    {sipName_ZoomIn, static_cast<int>(QKeySequence::ZoomIn), 85},
    {sipName_ZoomOut, static_cast<int>(QKeySequence::ZoomOut), 85},
};

PyDoc_STRVAR(doc_QKeySequence, "\1QKeySequence()\n"
    "QKeySequence(QKeySequence)\n"
    "QKeySequence(str, QKeySequence.SequenceFormat format=QKeySequence.NativeText)\n"
    "QKeySequence(int, int key2=0, int key3=0, int key4=0)\n"
    "QKeySequence(QVariant)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QKeySequence = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QKeySequence,
        {0}
    },
    {
        sipNameNr_QKeySequence,
        {0, 0, 1},
        11, methods_QKeySequence,
        74, enummembers_QKeySequence,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QKeySequence,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QKeySequence,
    init_type_QKeySequence,
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
    dealloc_QKeySequence,
    assign_QKeySequence,
    array_QKeySequence,
    copy_QKeySequence,
    release_QKeySequence,
    cast_QKeySequence,
    convertTo_QKeySequence,
    0,
    0,
    pickle_QKeySequence,
    0,
    0
},
    0,
    0,
    0,
    0
};

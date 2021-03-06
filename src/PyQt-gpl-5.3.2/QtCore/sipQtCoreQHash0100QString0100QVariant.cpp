/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:17:40 2014
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

#include "sipAPIQtCore.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qpycore_qhash.sip"
#include <qhash.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQHash0100QString0100QVariant.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQHash0100QString0100QVariant.cpp"
#line 27 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQHash0100QString0100QVariant.cpp"


extern "C" {static void assign_QHash_0100QString_0100QVariant(void *, SIP_SSIZE_T, const void *);}
static void assign_QHash_0100QString_0100QVariant(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QHash<QString,QVariant> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QHash<QString,QVariant> *>(sipSrc);
}


extern "C" {static void *array_QHash_0100QString_0100QVariant(SIP_SSIZE_T);}
static void *array_QHash_0100QString_0100QVariant(SIP_SSIZE_T sipNrElem)
{
    return new QHash<QString,QVariant>[sipNrElem];
}


extern "C" {static void *copy_QHash_0100QString_0100QVariant(const void *, SIP_SSIZE_T);}
static void *copy_QHash_0100QString_0100QVariant(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QHash<QString,QVariant>(reinterpret_cast<const QHash<QString,QVariant> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QHash_0100QString_0100QVariant(void *, int);}
static void release_QHash_0100QString_0100QVariant(void *ptr, int)
{
    delete reinterpret_cast<QHash<QString,QVariant> *>(ptr);
}



extern "C" {static int convertTo_QHash_0100QString_0100QVariant(PyObject *, void **, int *, PyObject *);}
static int convertTo_QHash_0100QString_0100QVariant(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QHash<QString,QVariant> **sipCppPtr = reinterpret_cast<QHash<QString,QVariant> **>(sipCppPtrV);

#line 84 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qpycore_qhash.sip"
    if (!sipIsErr)
        return PyDict_Check(sipPy);

    QHash<QString, QVariant> *qh = new QHash<QString, QVariant>;

    SIP_SSIZE_T pos = 0;
    PyObject *kobj, *vobj;
 
    while (PyDict_Next(sipPy, &pos, &kobj, &vobj))
    {
        int kstate;
        QString *k = reinterpret_cast<QString *>(
                sipForceConvertToType(kobj, sipType_QString, sipTransferObj,
                        SIP_NOT_NONE, &kstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a key has type '%s' but 'QString' is expected",
                    Py_TYPE(kobj)->tp_name);

            delete qh;

            return 0;
        }

        int vstate;
        QVariant *v = reinterpret_cast<QVariant *>(
                sipForceConvertToType(vobj, sipType_QVariant, sipTransferObj,
                        SIP_NOT_NONE, &vstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a value has type '%s' but 'QVariant' is expected",
                    Py_TYPE(vobj)->tp_name);

            sipReleaseType(k, sipType_QString, kstate);
            delete qh;

            return 0;
        }

        qh->insert(*k, *v);

        sipReleaseType(v, sipType_QVariant, vstate);
        sipReleaseType(k, sipType_QString, kstate);
    }
 
    *sipCppPtr = qh;
 
    return sipGetState(sipTransferObj);
#line 127 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQHash0100QString0100QVariant.cpp"
}


extern "C" {static PyObject *convertFrom_QHash_0100QString_0100QVariant(void *, PyObject *);}
static PyObject *convertFrom_QHash_0100QString_0100QVariant(void *sipCppV, PyObject *sipTransferObj)
{
   QHash<QString,QVariant> *sipCpp = reinterpret_cast<QHash<QString,QVariant> *>(sipCppV);

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qpycore_qhash.sip"
    PyObject *d = PyDict_New();

    if (!d)
        return 0;

    QHash<QString, QVariant>::const_iterator it = sipCpp->constBegin();
    QHash<QString, QVariant>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        QString *k = new QString(it.key());
        PyObject *kobj = sipConvertFromNewType(k, sipType_QString,
                sipTransferObj);

        if (!kobj)
        {
            delete k;
            Py_DECREF(d);

            return 0;
        }

        QVariant *v = new QVariant(it.value());
        PyObject *vobj = sipConvertFromNewType(v, sipType_QVariant,
                sipTransferObj);

        if (!vobj)
        {
            delete v;
            Py_DECREF(kobj);
            Py_DECREF(d);

            return 0;
        }

        int rc = PyDict_SetItem(d, kobj, vobj);

        Py_DECREF(vobj);
        Py_DECREF(kobj);

        if (rc < 0)
        {
            Py_DECREF(d);

            return 0;
        }

        ++it;
    }

    return d;
#line 188 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQHash0100QString0100QVariant.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QHash_0100QString_0100QVariant = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_6042,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QHash_0100QString_0100QVariant,
    array_QHash_0100QString_0100QVariant,
    copy_QHash_0100QString_0100QVariant,
    release_QHash_0100QString_0100QVariant,
    convertTo_QHash_0100QString_0100QVariant,
    convertFrom_QHash_0100QString_0100QVariant
};

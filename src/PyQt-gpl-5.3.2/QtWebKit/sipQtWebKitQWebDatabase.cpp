/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:20 2014
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

#include "sipAPIQtWebKit.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWebKit/qwebdatabase.sip"
#include <qwebdatabase.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebDatabase.cpp"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWebKit/qwebsecurityorigin.sip"
#include <qwebsecurityorigin.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebDatabase.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebDatabase.cpp"


PyDoc_STRVAR(doc_QWebDatabase_name, "QWebDatabase.name() -> str");

extern "C" {static PyObject *meth_QWebDatabase_name(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_name, doc_QWebDatabase_name);

    return NULL;
}


PyDoc_STRVAR(doc_QWebDatabase_displayName, "QWebDatabase.displayName() -> str");

extern "C" {static PyObject *meth_QWebDatabase_displayName(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_displayName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->displayName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_displayName, doc_QWebDatabase_displayName);

    return NULL;
}


PyDoc_STRVAR(doc_QWebDatabase_expectedSize, "QWebDatabase.expectedSize() -> int");

extern "C" {static PyObject *meth_QWebDatabase_expectedSize(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_expectedSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            qint64 sipRes;

            sipRes = sipCpp->expectedSize();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_expectedSize, doc_QWebDatabase_expectedSize);

    return NULL;
}


PyDoc_STRVAR(doc_QWebDatabase_size, "QWebDatabase.size() -> int");

extern "C" {static PyObject *meth_QWebDatabase_size(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            qint64 sipRes;

            sipRes = sipCpp->size();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_size, doc_QWebDatabase_size);

    return NULL;
}


PyDoc_STRVAR(doc_QWebDatabase_fileName, "QWebDatabase.fileName() -> str");

extern "C" {static PyObject *meth_QWebDatabase_fileName(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->fileName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_fileName, doc_QWebDatabase_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QWebDatabase_origin, "QWebDatabase.origin() -> QWebSecurityOrigin");

extern "C" {static PyObject *meth_QWebDatabase_origin(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_origin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebDatabase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebDatabase, &sipCpp))
        {
            QWebSecurityOrigin*sipRes;

            sipRes = new QWebSecurityOrigin(sipCpp->origin());

            return sipConvertFromNewType(sipRes,sipType_QWebSecurityOrigin,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_origin, doc_QWebDatabase_origin);

    return NULL;
}


PyDoc_STRVAR(doc_QWebDatabase_removeDatabase, "QWebDatabase.removeDatabase(QWebDatabase)");

extern "C" {static PyObject *meth_QWebDatabase_removeDatabase(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_removeDatabase(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebDatabase* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QWebDatabase, &a0))
        {
            QWebDatabase::removeDatabase(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_removeDatabase, doc_QWebDatabase_removeDatabase);

    return NULL;
}


PyDoc_STRVAR(doc_QWebDatabase_removeAllDatabases, "QWebDatabase.removeAllDatabases()");

extern "C" {static PyObject *meth_QWebDatabase_removeAllDatabases(PyObject *, PyObject *);}
static PyObject *meth_QWebDatabase_removeAllDatabases(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QWebDatabase::removeAllDatabases();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebDatabase, sipName_removeAllDatabases, doc_QWebDatabase_removeAllDatabases);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebDatabase(void *, const sipTypeDef *);}
static void *cast_QWebDatabase(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebDatabase)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebDatabase(void *, int);}
static void release_QWebDatabase(void *sipCppV,int)
{
    delete reinterpret_cast<QWebDatabase *>(sipCppV);
}


extern "C" {static void dealloc_QWebDatabase(sipSimpleWrapper *);}
static void dealloc_QWebDatabase(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebDatabase(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebDatabase(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebDatabase(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebDatabase *sipCpp = 0;

    {
        const QWebDatabase* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebDatabase, &a0))
        {
            sipCpp = new QWebDatabase(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWebDatabase[] = {
    {SIP_MLNAME_CAST(sipName_displayName), meth_QWebDatabase_displayName, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebDatabase_displayName)},
    {SIP_MLNAME_CAST(sipName_expectedSize), meth_QWebDatabase_expectedSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebDatabase_expectedSize)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QWebDatabase_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebDatabase_fileName)},
    {SIP_MLNAME_CAST(sipName_name), meth_QWebDatabase_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebDatabase_name)},
    {SIP_MLNAME_CAST(sipName_origin), meth_QWebDatabase_origin, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebDatabase_origin)},
    {SIP_MLNAME_CAST(sipName_removeAllDatabases), meth_QWebDatabase_removeAllDatabases, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebDatabase_removeAllDatabases)},
    {SIP_MLNAME_CAST(sipName_removeDatabase), meth_QWebDatabase_removeDatabase, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebDatabase_removeDatabase)},
    {SIP_MLNAME_CAST(sipName_size), meth_QWebDatabase_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebDatabase_size)}
};

PyDoc_STRVAR(doc_QWebDatabase, "\1QWebDatabase(QWebDatabase)");


pyqt5ClassTypeDef sipTypeDef_QtWebKit_QWebDatabase = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebDatabase,
        {0}
    },
    {
        sipNameNr_QWebDatabase,
        {0, 0, 1},
        8, methods_QWebDatabase,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebDatabase,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebDatabase,
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
    dealloc_QWebDatabase,
    0,
    0,
    0,
    release_QWebDatabase,
    cast_QWebDatabase,
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

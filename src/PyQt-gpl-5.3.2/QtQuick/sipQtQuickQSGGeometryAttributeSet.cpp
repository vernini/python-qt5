/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:08 2014
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

#include "sipAPIQtQuick.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 68 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#include <QVector>
#line 32 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGGeometryAttributeSet.cpp"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 55 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 38 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGGeometryAttributeSet.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSGGeometry_AttributeSet(void *, const sipTypeDef *);}
static void *cast_QSGGeometry_AttributeSet(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSGGeometry_AttributeSet)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGGeometry_AttributeSet(void *, int);}
static void release_QSGGeometry_AttributeSet(void *sipCppV,int)
{
    delete reinterpret_cast<QSGGeometry::AttributeSet *>(sipCppV);
}


extern "C" {static void dealloc_QSGGeometry_AttributeSet(sipSimpleWrapper *);}
static void dealloc_QSGGeometry_AttributeSet(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSGGeometry_AttributeSet(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSGGeometry_AttributeSet(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGGeometry_AttributeSet(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSGGeometry::AttributeSet *sipCpp = 0;

    {
        PyObject * a0;
        int a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_stride,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "P0|i", &a0, &a1))
        {
            sipErrorState sipError = sipErrorNone;

#line 74 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsggeometry.sip"
            PyObject *iter = PyObject_GetIter(a0);
            
            if (!iter
            #if PY_MAJOR_VERSION < 3
                || PyString_Check(a0)
            #endif
                || PyUnicode_Check(a0))
            {
                Py_XDECREF(iter);
                PyErr_SetString(PyExc_TypeError, "iterable object expected");
                sipError = sipErrorContinue;
            }
            else
            {
                QVector<QSGGeometry::Attribute> attrs;
                int stride = 0;
            
                for (SIP_SSIZE_T i = 0; ; ++i)
                {
                    PyErr_Clear();
                    PyObject *itm = PyIter_Next(iter);
            
                    if (!itm)
                    {
                        if (PyErr_Occurred())
                            sipError = sipErrorFail;
            
                        break;
                    }
            
                    int state, is_err = 0;
                    QSGGeometry::Attribute *attr;
            
                    attr = reinterpret_cast<QSGGeometry::Attribute *>(
                            sipForceConvertToType(itm, sipType_QSGGeometry_Attribute, 0,
                            SIP_NOT_NONE, &state, &is_err));
            
                    if (is_err)
                    {
                        PyErr_Format(PyExc_TypeError,
                                "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QSGGeometry.Attribute' is expected",
                                i, Py_TYPE(itm)->tp_name);
            
                        Py_DECREF(itm);
                        sipError = sipErrorFail;
            
                        break;
                    }
            
                    // Calculate the stride if there no explicit one.
                    if (a1 <= 0)
                    {
                        int size;
            
                        switch (attr->type)
                        {
                        case GL_BYTE:
                            size = sizeof (qint8);
                            break;
            
            #if defined(SIPFeature_PyQt_Desktop_OpenGL)
            #if GL_DOUBLE != GL_FLOAT
                        case GL_DOUBLE:
                            size = sizeof (double);
                            break;
            #endif
            #endif
            
                        case GL_FLOAT:
                            size = sizeof (float);
                            break;
            
                        case GL_INT:
                            size = sizeof (qint32);
                            break;
            
                        default:
                            size = 0;
                        }
            
                        if (!size)
                        {
                            PyErr_Format(PyExc_TypeError,
                                    "index " SIP_SSIZE_T_FORMAT " has an unsupported primitive type",
                                    i);
            
                            sipReleaseType(attr, sipType_QSGGeometry_Attribute, state);
                            Py_DECREF(itm);
                            sipError = sipErrorFail;
            
                            break;
                        }
            
                        stride += attr->tupleSize * size;
                    }
            
                    attrs.append(*attr);
            
                    sipReleaseType(attr, sipType_QSGGeometry_Attribute, state);
                    Py_DECREF(itm);
                }
            
                Py_DECREF(iter);
            
                if (sipError == sipErrorNone)
                {
                    if (attrs.isEmpty())
                    {
                        PyErr_SetString(PyExc_TypeError, "no attributes defined");
                        sipError = sipErrorFail;
                    }
                    else
                    {
                        PyObject *bytes = SIPBytes_FromStringAndSize(
                                reinterpret_cast<char *>(attrs.data()),
                                sizeof (QSGGeometry::Attribute) * attrs.size());
            
                        if (!bytes)
                        {
                            sipError = sipErrorFail;
                        }
                        else
                        {
                            sipCpp = new QSGGeometry::AttributeSet;
            
                            sipCpp->count = attrs.size();
                            sipCpp->stride = (a1 > 0 ? a1 : stride);
                            sipCpp->attributes = reinterpret_cast<QSGGeometry::Attribute *>(
                                    SIPBytes_AS_STRING(bytes));
            
                            sipSelf->user = bytes;
                        }
                    }
                }
            }
#line 224 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGGeometryAttributeSet.cpp"

            if (sipError == sipErrorNone)
                return sipCpp;

            if (sipUnused)
            {
                Py_XDECREF(*sipUnused);
            }

            sipAddException(sipError, sipParseErr);

            if (sipError == sipErrorFail)
                return NULL;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QSGGeometry_AttributeSet_attributes(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_AttributeSet_attributes(void *sipSelf, PyObject *, PyObject *)
{
    PyObject *sipPy;
    QSGGeometry::AttributeSet *sipCpp = reinterpret_cast<QSGGeometry::AttributeSet *>(sipSelf);

#line 215 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsggeometry.sip"
            sipPy = sipConvertToTypedArray((void *)sipCpp->attributes,
                    sipType_QSGGeometry_Attribute, "iiiI", sizeof (QSGGeometry::Attribute),
                    sipCpp->count, SIP_READ_ONLY);
#line 255 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGGeometryAttributeSet.cpp"

    return sipPy;
}


extern "C" {static int varset_QSGGeometry_AttributeSet_attributes(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_AttributeSet_attributes(void *, PyObject *, PyObject *)
{
   int sipErr = 0;

#line 221 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsggeometry.sip"
            sipErr = 1;
            PyErr_SetString(PyExc_ValueError, "array is read-only");
#line 269 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGGeometryAttributeSet.cpp"

    return (sipErr ? -1 : 0);
}


extern "C" {static PyObject *varget_QSGGeometry_AttributeSet_count(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_AttributeSet_count(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QSGGeometry::AttributeSet *sipCpp = reinterpret_cast<QSGGeometry::AttributeSet *>(sipSelf);

    sipVal = sipCpp->count;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QSGGeometry_AttributeSet_count(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_AttributeSet_count(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QSGGeometry::AttributeSet *sipCpp = reinterpret_cast<QSGGeometry::AttributeSet *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->count = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_AttributeSet_stride(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_AttributeSet_stride(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QSGGeometry::AttributeSet *sipCpp = reinterpret_cast<QSGGeometry::AttributeSet *>(sipSelf);

    sipVal = sipCpp->stride;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QSGGeometry_AttributeSet_stride(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_AttributeSet_stride(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QSGGeometry::AttributeSet *sipCpp = reinterpret_cast<QSGGeometry::AttributeSet *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->stride = sipVal;

    return 0;
}

sipVariableDef variables_QSGGeometry_AttributeSet[] = {
    {InstanceVariable, sipName_attributes, (PyMethodDef *)varget_QSGGeometry_AttributeSet_attributes, (PyMethodDef *)varset_QSGGeometry_AttributeSet_attributes, NULL, NULL},
    {InstanceVariable, sipName_count, (PyMethodDef *)varget_QSGGeometry_AttributeSet_count, (PyMethodDef *)varset_QSGGeometry_AttributeSet_count, NULL, NULL},
    {InstanceVariable, sipName_stride, (PyMethodDef *)varget_QSGGeometry_AttributeSet_stride, (PyMethodDef *)varset_QSGGeometry_AttributeSet_stride, NULL, NULL},
};

PyDoc_STRVAR(doc_QSGGeometry_AttributeSet, "\1QSGGeometry.AttributeSet(sequence-of-QSGGeometry.Attribute, int stride=0)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGGeometry_AttributeSet = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGGeometry__AttributeSet,
        {0}
    },
    {
        sipNameNr_AttributeSet,
        {28, 255, 0},
        0, 0,
        0, 0,
        3, variables_QSGGeometry_AttributeSet,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGGeometry_AttributeSet,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSGGeometry_AttributeSet,
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
    dealloc_QSGGeometry_AttributeSet,
    0,
    0,
    0,
    release_QSGGeometry_AttributeSet,
    cast_QSGGeometry_AttributeSet,
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

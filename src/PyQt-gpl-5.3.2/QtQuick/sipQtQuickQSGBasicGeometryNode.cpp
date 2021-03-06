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

#line 260 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGBasicGeometryNode.cpp"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGBasicGeometryNode.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGBasicGeometryNode.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGBasicGeometryNode.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGBasicGeometryNode.cpp"


PyDoc_STRVAR(doc_QSGBasicGeometryNode_setGeometry, "QSGBasicGeometryNode.setGeometry(QSGGeometry)");

extern "C" {static PyObject *meth_QSGBasicGeometryNode_setGeometry(PyObject *, PyObject *);}
static PyObject *meth_QSGBasicGeometryNode_setGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry* a0;
        PyObject *a0Wrapper;
        QSGBasicGeometryNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QSGBasicGeometryNode, &sipCpp, &a0Wrapper, sipType_QSGGeometry, &a0))
        {
#line 267 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsgnode.sip"
        sipCpp->setGeometry(a0);
        
        if (sipCpp->flags() & QSGNode::OwnsGeometry)
            sipTransferTo(a0Wrapper, sipSelf);
#line 64 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGBasicGeometryNode.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGBasicGeometryNode, sipName_setGeometry, doc_QSGBasicGeometryNode_setGeometry);

    return NULL;
}


PyDoc_STRVAR(doc_QSGBasicGeometryNode_geometry, "QSGBasicGeometryNode.geometry() -> QSGGeometry");

extern "C" {static PyObject *meth_QSGBasicGeometryNode_geometry(PyObject *, PyObject *);}
static PyObject *meth_QSGBasicGeometryNode_geometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGBasicGeometryNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGBasicGeometryNode, &sipCpp))
        {
            QSGGeometry*sipRes;

            sipRes = sipCpp->geometry();

            return sipConvertFromType(sipRes,sipType_QSGGeometry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGBasicGeometryNode, sipName_geometry, doc_QSGBasicGeometryNode_geometry);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSGBasicGeometryNode(void *, const sipTypeDef *);}
static void *cast_QSGBasicGeometryNode(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSGBasicGeometryNode)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSGNode)->ctd_cast((QSGNode *)(QSGBasicGeometryNode *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGBasicGeometryNode(void *, int);}
static void release_QSGBasicGeometryNode(void *sipCppV,int)
{
    delete reinterpret_cast<QSGBasicGeometryNode *>(sipCppV);
}


extern "C" {static void dealloc_QSGBasicGeometryNode(sipSimpleWrapper *);}
static void dealloc_QSGBasicGeometryNode(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSGBasicGeometryNode(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSGBasicGeometryNode[] = {{44, 255, 1}};


static PyMethodDef methods_QSGBasicGeometryNode[] = {
    {SIP_MLNAME_CAST(sipName_geometry), meth_QSGBasicGeometryNode_geometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGBasicGeometryNode_geometry)},
    {SIP_MLNAME_CAST(sipName_setGeometry), meth_QSGBasicGeometryNode_setGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGBasicGeometryNode_setGeometry)}
};


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGBasicGeometryNode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGBasicGeometryNode,
        {0}
    },
    {
        sipNameNr_QSGBasicGeometryNode,
        {0, 0, 1},
        2, methods_QSGBasicGeometryNode,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QSGBasicGeometryNode,
    0,
    0,
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
    dealloc_QSGBasicGeometryNode,
    0,
    0,
    0,
    release_QSGBasicGeometryNode,
    cast_QSGBasicGeometryNode,
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

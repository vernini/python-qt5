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

#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQList0100QTextOptionTab.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 85 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 35 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQList0100QTextOptionTab.cpp"


extern "C" {static void assign_QList_0100QTextOption_Tab(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QTextOption_Tab(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QTextOption::Tab> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QTextOption::Tab> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QTextOption_Tab(SIP_SSIZE_T);}
static void *array_QList_0100QTextOption_Tab(SIP_SSIZE_T sipNrElem)
{
    return new QList<QTextOption::Tab>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QTextOption_Tab(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QTextOption_Tab(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QTextOption::Tab>(reinterpret_cast<const QList<QTextOption::Tab> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QTextOption_Tab(void *, int);}
static void release_QList_0100QTextOption_Tab(void *ptr, int)
{
    delete reinterpret_cast<QList<QTextOption::Tab> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QTextOption_Tab(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QTextOption_Tab(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QTextOption::Tab> **sipCppPtr = reinterpret_cast<QList<QTextOption::Tab> **>(sipCppPtrV);

#line 66 "sip/QtCore/qpycore_qlist.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QList<QTextOption::Tab> *ql = new QList<QTextOption::Tab>;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QTextOption::Tab *t = reinterpret_cast<QTextOption::Tab *>(
                sipForceConvertToType(itm, sipType_QTextOption_Tab, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QTextOption::Tab' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QTextOption_Tab, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 144 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQList0100QTextOptionTab.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QTextOption_Tab(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QTextOption_Tab(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QTextOption::Tab> *sipCpp = reinterpret_cast<QList<QTextOption::Tab> *>(sipCppV);

#line 40 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QTextOption::Tab *t = new QTextOption::Tab(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QTextOption_Tab,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 177 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQList0100QTextOptionTab.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0100QTextOption_Tab = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_5695,
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
    assign_QList_0100QTextOption_Tab,
    array_QList_0100QTextOption_Tab,
    copy_QList_0100QTextOption_Tab,
    release_QList_0100QTextOption_Tab,
    convertTo_QList_0100QTextOption_Tab,
    convertFrom_QList_0100QTextOption_Tab
};

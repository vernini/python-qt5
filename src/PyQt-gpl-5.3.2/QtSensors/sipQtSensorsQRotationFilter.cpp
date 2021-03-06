/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:48 2014
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

#include "sipAPIQtSensors.h"

#line 44 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtSensors/qrotationsensor.sip"
#include <qrotationsensor.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQRotationFilter.cpp"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtSensors/qrotationsensor.sip"
#include <qrotationsensor.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQRotationFilter.cpp"


class sipQRotationFilter : public QRotationFilter
{
public:
    sipQRotationFilter();
    sipQRotationFilter(const QRotationFilter&);
    virtual ~sipQRotationFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool filter(QRotationReading*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQRotationFilter(const sipQRotationFilter &);
    sipQRotationFilter &operator = (const sipQRotationFilter &);

    char sipPyMethods[1];
};

sipQRotationFilter::sipQRotationFilter(): QRotationFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQRotationFilter::sipQRotationFilter(const QRotationFilter& a0): QRotationFilter(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQRotationFilter::~sipQRotationFilter()
{
    sipCommonDtor(sipPySelf);
}

bool sipQRotationFilter::filter(QRotationReading*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QRotationFilter,sipName_filter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtSensors_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QRotationReading*);

    return sipVH_QtSensors_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QRotationFilter_filter, "QRotationFilter.filter(QRotationReading) -> bool");

extern "C" {static PyObject *meth_QRotationFilter_filter(PyObject *, PyObject *);}
static PyObject *meth_QRotationFilter_filter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QRotationReading* a0;
        QRotationFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QRotationFilter, &sipCpp, sipType_QRotationReading, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QRotationFilter, sipName_filter);
                return NULL;
            }

            sipRes = sipCpp->filter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRotationFilter, sipName_filter, doc_QRotationFilter_filter);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QRotationFilter(void *, const sipTypeDef *);}
static void *cast_QRotationFilter(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QRotationFilter)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSensorFilter)->ctd_cast((QSensorFilter *)(QRotationFilter *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRotationFilter(void *, int);}
static void release_QRotationFilter(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQRotationFilter *>(sipCppV);
    else
        delete reinterpret_cast<QRotationFilter *>(sipCppV);
}


extern "C" {static void dealloc_QRotationFilter(sipSimpleWrapper *);}
static void dealloc_QRotationFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQRotationFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QRotationFilter(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QRotationFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRotationFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQRotationFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQRotationFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QRotationFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRotationFilter, &a0))
        {
            sipCpp = new sipQRotationFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QRotationFilter[] = {{50, 255, 1}};


static PyMethodDef methods_QRotationFilter[] = {
    {SIP_MLNAME_CAST(sipName_filter), meth_QRotationFilter_filter, METH_VARARGS, SIP_MLDOC_CAST(doc_QRotationFilter_filter)}
};

PyDoc_STRVAR(doc_QRotationFilter, "\1QRotationFilter()\n"
    "QRotationFilter(QRotationFilter)");


pyqt5ClassTypeDef sipTypeDef_QtSensors_QRotationFilter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QRotationFilter,
        {0}
    },
    {
        sipNameNr_QRotationFilter,
        {0, 0, 1},
        1, methods_QRotationFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRotationFilter,
    -1,
    -1,
    supers_QRotationFilter,
    0,
    init_type_QRotationFilter,
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
    dealloc_QRotationFilter,
    0,
    0,
    0,
    release_QRotationFilter,
    cast_QRotationFilter,
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

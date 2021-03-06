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

#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtSensors/qlightsensor.sip"
#include <qlightsensor.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQLightFilter.cpp"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtSensors/qlightsensor.sip"
#include <qlightsensor.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQLightFilter.cpp"


class sipQLightFilter : public QLightFilter
{
public:
    sipQLightFilter();
    sipQLightFilter(const QLightFilter&);
    virtual ~sipQLightFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool filter(QLightReading*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQLightFilter(const sipQLightFilter &);
    sipQLightFilter &operator = (const sipQLightFilter &);

    char sipPyMethods[1];
};

sipQLightFilter::sipQLightFilter(): QLightFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLightFilter::sipQLightFilter(const QLightFilter& a0): QLightFilter(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLightFilter::~sipQLightFilter()
{
    sipCommonDtor(sipPySelf);
}

bool sipQLightFilter::filter(QLightReading*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QLightFilter,sipName_filter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtSensors_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QLightReading*);

    return sipVH_QtSensors_8(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QLightFilter_filter, "QLightFilter.filter(QLightReading) -> bool");

extern "C" {static PyObject *meth_QLightFilter_filter(PyObject *, PyObject *);}
static PyObject *meth_QLightFilter_filter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QLightReading* a0;
        QLightFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QLightFilter, &sipCpp, sipType_QLightReading, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLightFilter, sipName_filter);
                return NULL;
            }

            sipRes = sipCpp->filter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLightFilter, sipName_filter, doc_QLightFilter_filter);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QLightFilter(void *, const sipTypeDef *);}
static void *cast_QLightFilter(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QLightFilter)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSensorFilter)->ctd_cast((QSensorFilter *)(QLightFilter *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLightFilter(void *, int);}
static void release_QLightFilter(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQLightFilter *>(sipCppV);
    else
        delete reinterpret_cast<QLightFilter *>(sipCppV);
}


extern "C" {static void dealloc_QLightFilter(sipSimpleWrapper *);}
static void dealloc_QLightFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQLightFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QLightFilter(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QLightFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLightFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQLightFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQLightFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QLightFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QLightFilter, &a0))
        {
            sipCpp = new sipQLightFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QLightFilter[] = {{50, 255, 1}};


static PyMethodDef methods_QLightFilter[] = {
    {SIP_MLNAME_CAST(sipName_filter), meth_QLightFilter_filter, METH_VARARGS, SIP_MLDOC_CAST(doc_QLightFilter_filter)}
};

PyDoc_STRVAR(doc_QLightFilter, "\1QLightFilter()\n"
    "QLightFilter(QLightFilter)");


pyqt5ClassTypeDef sipTypeDef_QtSensors_QLightFilter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QLightFilter,
        {0}
    },
    {
        sipNameNr_QLightFilter,
        {0, 0, 1},
        1, methods_QLightFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLightFilter,
    -1,
    -1,
    supers_QLightFilter,
    0,
    init_type_QLightFilter,
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
    dealloc_QLightFilter,
    0,
    0,
    0,
    release_QLightFilter,
    cast_QLightFilter,
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

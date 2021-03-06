/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:54 2014
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

#include "sipAPIQtWinExtras.h"

#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWinExtras/qwinfunctions.sip"
#include <qwinfunctions.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQtWin.cpp"

#line 26 "sip/QtGui/qbitmap.sip"
#include <qbitmap.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQtWin.cpp"
#line 30 "sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQtWin.cpp"
#line 30 "sip/QtGui/qimage.sip"
#include <qimage.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQtWin.cpp"
#line 30 "sip/QtGui/qregion.sip"
#include <qregion.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQtWin.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQtWin.cpp"
#line 30 "sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQtWin.cpp"
#line 26 "sip/QtGui/qwindow.sip"
#include <qwindow.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQtWin.cpp"
#line 30 "sip/QtCore/qmargins.sip"
#include <qmargins.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQtWin.cpp"
#line 30 "sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQtWin.cpp"


PyDoc_STRVAR(doc_QtWin_taskbarDeleteTab, "QtWin.taskbarDeleteTab(QWindow)\n"
    "QtWin.taskbarDeleteTab(QWidget)");

extern "C" {static PyObject *meth_QtWin_taskbarDeleteTab(PyObject *, PyObject *);}
static PyObject *meth_QtWin_taskbarDeleteTab(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWindow, &a0))
        {
            QtWin::taskbarDeleteTab(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            QtWin::taskbarDeleteTab(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_taskbarDeleteTab, doc_QtWin_taskbarDeleteTab);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_taskbarAddTab, "QtWin.taskbarAddTab(QWindow)\n"
    "QtWin.taskbarAddTab(QWidget)");

extern "C" {static PyObject *meth_QtWin_taskbarAddTab(PyObject *, PyObject *);}
static PyObject *meth_QtWin_taskbarAddTab(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWindow, &a0))
        {
            QtWin::taskbarAddTab(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            QtWin::taskbarAddTab(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_taskbarAddTab, doc_QtWin_taskbarAddTab);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_taskbarActivateTabAlt, "QtWin.taskbarActivateTabAlt(QWindow)\n"
    "QtWin.taskbarActivateTabAlt(QWidget)");

extern "C" {static PyObject *meth_QtWin_taskbarActivateTabAlt(PyObject *, PyObject *);}
static PyObject *meth_QtWin_taskbarActivateTabAlt(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWindow, &a0))
        {
            QtWin::taskbarActivateTabAlt(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            QtWin::taskbarActivateTabAlt(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_taskbarActivateTabAlt, doc_QtWin_taskbarActivateTabAlt);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_taskbarActivateTab, "QtWin.taskbarActivateTab(QWindow)\n"
    "QtWin.taskbarActivateTab(QWidget)");

extern "C" {static PyObject *meth_QtWin_taskbarActivateTab(PyObject *, PyObject *);}
static PyObject *meth_QtWin_taskbarActivateTab(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWindow, &a0))
        {
            QtWin::taskbarActivateTab(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            QtWin::taskbarActivateTab(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_taskbarActivateTab, doc_QtWin_taskbarActivateTab);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_markFullscreenWindow, "QtWin.markFullscreenWindow(QWindow, bool fullscreen=True)\n"
    "QtWin.markFullscreenWindow(QWidget, bool fullscreen=True)");

extern "C" {static PyObject *meth_QtWin_markFullscreenWindow(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QtWin_markFullscreenWindow(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;
        bool a1 = 1;

        static const char *sipKwdList[] = {
            NULL,
            sipName_fullscreen,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J8|b", sipType_QWindow, &a0, &a1))
        {
            QtWin::markFullscreenWindow(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;
        bool a1 = 1;

        static const char *sipKwdList[] = {
            NULL,
            sipName_fullscreen,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J8|b", sipType_QWidget, &a0, &a1))
        {
            QtWin::markFullscreenWindow(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_markFullscreenWindow, doc_QtWin_markFullscreenWindow);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_setCurrentProcessExplicitAppUserModelID, "QtWin.setCurrentProcessExplicitAppUserModelID(str)");

extern "C" {static PyObject *meth_QtWin_setCurrentProcessExplicitAppUserModelID(PyObject *, PyObject *);}
static PyObject *meth_QtWin_setCurrentProcessExplicitAppUserModelID(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QtWin::setCurrentProcessExplicitAppUserModelID(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_setCurrentProcessExplicitAppUserModelID, doc_QtWin_setCurrentProcessExplicitAppUserModelID);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_isCompositionOpaque, "QtWin.isCompositionOpaque() -> bool");

extern "C" {static PyObject *meth_QtWin_isCompositionOpaque(PyObject *, PyObject *);}
static PyObject *meth_QtWin_isCompositionOpaque(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes = QtWin::isCompositionOpaque();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_isCompositionOpaque, doc_QtWin_isCompositionOpaque);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_setCompositionEnabled, "QtWin.setCompositionEnabled(bool)");

extern "C" {static PyObject *meth_QtWin_setCompositionEnabled(PyObject *, PyObject *);}
static PyObject *meth_QtWin_setCompositionEnabled(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "b", &a0))
        {
            QtWin::setCompositionEnabled(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_setCompositionEnabled, doc_QtWin_setCompositionEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_isCompositionEnabled, "QtWin.isCompositionEnabled() -> bool");

extern "C" {static PyObject *meth_QtWin_isCompositionEnabled(PyObject *, PyObject *);}
static PyObject *meth_QtWin_isCompositionEnabled(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes = QtWin::isCompositionEnabled();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_isCompositionEnabled, doc_QtWin_isCompositionEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_disableBlurBehindWindow, "QtWin.disableBlurBehindWindow(QWindow)\n"
    "QtWin.disableBlurBehindWindow(QWidget)");

extern "C" {static PyObject *meth_QtWin_disableBlurBehindWindow(PyObject *, PyObject *);}
static PyObject *meth_QtWin_disableBlurBehindWindow(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWindow, &a0))
        {
            QtWin::disableBlurBehindWindow(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            QtWin::disableBlurBehindWindow(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_disableBlurBehindWindow, doc_QtWin_disableBlurBehindWindow);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_enableBlurBehindWindow, "QtWin.enableBlurBehindWindow(QWindow, QRegion)\n"
    "QtWin.enableBlurBehindWindow(QWindow)\n"
    "QtWin.enableBlurBehindWindow(QWidget, QRegion)\n"
    "QtWin.enableBlurBehindWindow(QWidget)");

extern "C" {static PyObject *meth_QtWin_enableBlurBehindWindow(PyObject *, PyObject *);}
static PyObject *meth_QtWin_enableBlurBehindWindow(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;
        const QRegion* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J9", sipType_QWindow, &a0, sipType_QRegion, &a1))
        {
            QtWin::enableBlurBehindWindow(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWindow* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWindow, &a0))
        {
            QtWin::enableBlurBehindWindow(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;
        const QRegion* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J9", sipType_QWidget, &a0, sipType_QRegion, &a1))
        {
            QtWin::enableBlurBehindWindow(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            QtWin::enableBlurBehindWindow(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_enableBlurBehindWindow, doc_QtWin_enableBlurBehindWindow);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_resetExtendedFrame, "QtWin.resetExtendedFrame(QWindow)\n"
    "QtWin.resetExtendedFrame(QWidget)");

extern "C" {static PyObject *meth_QtWin_resetExtendedFrame(PyObject *, PyObject *);}
static PyObject *meth_QtWin_resetExtendedFrame(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWindow, &a0))
        {
            QtWin::resetExtendedFrame(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            QtWin::resetExtendedFrame(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_resetExtendedFrame, doc_QtWin_resetExtendedFrame);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_extendFrameIntoClientArea, "QtWin.extendFrameIntoClientArea(QWindow, int, int, int, int)\n"
    "QtWin.extendFrameIntoClientArea(QWindow, QMargins)\n"
    "QtWin.extendFrameIntoClientArea(QWidget, QMargins)\n"
    "QtWin.extendFrameIntoClientArea(QWidget, int, int, int, int)");

extern "C" {static PyObject *meth_QtWin_extendFrameIntoClientArea(PyObject *, PyObject *);}
static PyObject *meth_QtWin_extendFrameIntoClientArea(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;
        int a1;
        int a2;
        int a3;
        int a4;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8iiii", sipType_QWindow, &a0, &a1, &a2, &a3, &a4))
        {
            QtWin::extendFrameIntoClientArea(a0,a1,a2,a3,a4);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWindow* a0;
        const QMargins* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J9", sipType_QWindow, &a0, sipType_QMargins, &a1))
        {
            QtWin::extendFrameIntoClientArea(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;
        const QMargins* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J9", sipType_QWidget, &a0, sipType_QMargins, &a1))
        {
            QtWin::extendFrameIntoClientArea(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;
        int a1;
        int a2;
        int a3;
        int a4;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8iiii", sipType_QWidget, &a0, &a1, &a2, &a3, &a4))
        {
            QtWin::extendFrameIntoClientArea(a0,a1,a2,a3,a4);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_extendFrameIntoClientArea, doc_QtWin_extendFrameIntoClientArea);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_windowFlip3DPolicy, "QtWin.windowFlip3DPolicy(QWindow) -> QtWin.WindowFlip3DPolicy\n"
    "QtWin.windowFlip3DPolicy(QWidget) -> QtWin.WindowFlip3DPolicy");

extern "C" {static PyObject *meth_QtWin_windowFlip3DPolicy(PyObject *, PyObject *);}
static PyObject *meth_QtWin_windowFlip3DPolicy(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWindow, &a0))
        {
            QtWin::WindowFlip3DPolicy sipRes;

            sipRes = QtWin::windowFlip3DPolicy(a0);

            return sipConvertFromEnum(sipRes,sipType_QtWin_WindowFlip3DPolicy);
        }
    }

    {
        QWidget* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            QtWin::WindowFlip3DPolicy sipRes;

            sipRes = QtWin::windowFlip3DPolicy(a0);

            return sipConvertFromEnum(sipRes,sipType_QtWin_WindowFlip3DPolicy);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_windowFlip3DPolicy, doc_QtWin_windowFlip3DPolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_setWindowFlip3DPolicy, "QtWin.setWindowFlip3DPolicy(QWindow, QtWin.WindowFlip3DPolicy)\n"
    "QtWin.setWindowFlip3DPolicy(QWidget, QtWin.WindowFlip3DPolicy)");

extern "C" {static PyObject *meth_QtWin_setWindowFlip3DPolicy(PyObject *, PyObject *);}
static PyObject *meth_QtWin_setWindowFlip3DPolicy(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;
        QtWin::WindowFlip3DPolicy a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8E", sipType_QWindow, &a0, sipType_QtWin_WindowFlip3DPolicy, &a1))
        {
            QtWin::setWindowFlip3DPolicy(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;
        QtWin::WindowFlip3DPolicy a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8E", sipType_QWidget, &a0, sipType_QtWin_WindowFlip3DPolicy, &a1))
        {
            QtWin::setWindowFlip3DPolicy(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_setWindowFlip3DPolicy, doc_QtWin_setWindowFlip3DPolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_isWindowPeekDisallowed, "QtWin.isWindowPeekDisallowed(QWindow) -> bool\n"
    "QtWin.isWindowPeekDisallowed(QWidget) -> bool");

extern "C" {static PyObject *meth_QtWin_isWindowPeekDisallowed(PyObject *, PyObject *);}
static PyObject *meth_QtWin_isWindowPeekDisallowed(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWindow, &a0))
        {
            bool sipRes;

            sipRes = QtWin::isWindowPeekDisallowed(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QWidget* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            bool sipRes;

            sipRes = QtWin::isWindowPeekDisallowed(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_isWindowPeekDisallowed, doc_QtWin_isWindowPeekDisallowed);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_setWindowDisallowPeek, "QtWin.setWindowDisallowPeek(QWindow, bool)\n"
    "QtWin.setWindowDisallowPeek(QWidget, bool)");

extern "C" {static PyObject *meth_QtWin_setWindowDisallowPeek(PyObject *, PyObject *);}
static PyObject *meth_QtWin_setWindowDisallowPeek(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;
        bool a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8b", sipType_QWindow, &a0, &a1))
        {
            QtWin::setWindowDisallowPeek(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;
        bool a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8b", sipType_QWidget, &a0, &a1))
        {
            QtWin::setWindowDisallowPeek(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_setWindowDisallowPeek, doc_QtWin_setWindowDisallowPeek);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_isWindowExcludedFromPeek, "QtWin.isWindowExcludedFromPeek(QWindow) -> bool\n"
    "QtWin.isWindowExcludedFromPeek(QWidget) -> bool");

extern "C" {static PyObject *meth_QtWin_isWindowExcludedFromPeek(PyObject *, PyObject *);}
static PyObject *meth_QtWin_isWindowExcludedFromPeek(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWindow, &a0))
        {
            bool sipRes;

            sipRes = QtWin::isWindowExcludedFromPeek(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QWidget* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_QWidget, &a0))
        {
            bool sipRes;

            sipRes = QtWin::isWindowExcludedFromPeek(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_isWindowExcludedFromPeek, doc_QtWin_isWindowExcludedFromPeek);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_setWindowExcludedFromPeek, "QtWin.setWindowExcludedFromPeek(QWindow, bool)\n"
    "QtWin.setWindowExcludedFromPeek(QWidget, bool)");

extern "C" {static PyObject *meth_QtWin_setWindowExcludedFromPeek(PyObject *, PyObject *);}
static PyObject *meth_QtWin_setWindowExcludedFromPeek(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWindow* a0;
        bool a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8b", sipType_QWindow, &a0, &a1))
        {
            QtWin::setWindowExcludedFromPeek(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QWidget* a0;
        bool a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8b", sipType_QWidget, &a0, &a1))
        {
            QtWin::setWindowExcludedFromPeek(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_setWindowExcludedFromPeek, doc_QtWin_setWindowExcludedFromPeek);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_realColorizationColor, "QtWin.realColorizationColor() -> QColor");

extern "C" {static PyObject *meth_QtWin_realColorizationColor(PyObject *, PyObject *);}
static PyObject *meth_QtWin_realColorizationColor(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QColor*sipRes;

            sipRes = new QColor(QtWin::realColorizationColor());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_realColorizationColor, doc_QtWin_realColorizationColor);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_colorizationColor, "QtWin.colorizationColor() -> (QColor, bool)");

extern "C" {static PyObject *meth_QtWin_colorizationColor(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QtWin_colorizationColor(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, ""))
        {
            QColor*sipRes;

            sipRes = new QColor(QtWin::colorizationColor(&a0));

            PyObject *sipResObj = sipConvertFromNewType(sipRes,sipType_QColor,NULL);
            return sipBuildResult(0,"(Rb)",sipResObj,a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_colorizationColor, doc_QtWin_colorizationColor);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_errorStringFromHresult, "QtWin.errorStringFromHresult(int) -> str");

extern "C" {static PyObject *meth_QtWin_errorStringFromHresult(PyObject *, PyObject *);}
static PyObject *meth_QtWin_errorStringFromHresult(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        HRESULT a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "l", &a0))
        {
            QString*sipRes;

            sipRes = new QString(QtWin::errorStringFromHresult(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_errorStringFromHresult, doc_QtWin_errorStringFromHresult);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_stringFromHresult, "QtWin.stringFromHresult(int) -> str");

extern "C" {static PyObject *meth_QtWin_stringFromHresult(PyObject *, PyObject *);}
static PyObject *meth_QtWin_stringFromHresult(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        HRESULT a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "l", &a0))
        {
            QString*sipRes;

            sipRes = new QString(QtWin::stringFromHresult(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_stringFromHresult, doc_QtWin_stringFromHresult);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_fromHRGN, "QtWin.fromHRGN(sip.voidptr) -> QRegion");

extern "C" {static PyObject *meth_QtWin_fromHRGN(PyObject *, PyObject *);}
static PyObject *meth_QtWin_fromHRGN(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        HRGN a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "v", &a0))
        {
            QRegion*sipRes;

            sipRes = new QRegion(QtWin::fromHRGN(a0));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_fromHRGN, doc_QtWin_fromHRGN);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_toHRGN, "QtWin.toHRGN(QRegion) -> sip.voidptr");

extern "C" {static PyObject *meth_QtWin_toHRGN(PyObject *, PyObject *);}
static PyObject *meth_QtWin_toHRGN(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegion* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QRegion, &a0))
        {
            HRGN sipRes;

            sipRes = QtWin::toHRGN(*a0);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_toHRGN, doc_QtWin_toHRGN);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_fromHICON, "QtWin.fromHICON(sip.voidptr) -> QPixmap");

extern "C" {static PyObject *meth_QtWin_fromHICON(PyObject *, PyObject *);}
static PyObject *meth_QtWin_fromHICON(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        HICON a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "v", &a0))
        {
            QPixmap*sipRes;

            sipRes = new QPixmap(QtWin::fromHICON(a0));

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_fromHICON, doc_QtWin_fromHICON);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_imageFromHBITMAP, "QtWin.imageFromHBITMAP(sip.voidptr, sip.voidptr, int, int) -> QImage");

extern "C" {static PyObject *meth_QtWin_imageFromHBITMAP(PyObject *, PyObject *);}
static PyObject *meth_QtWin_imageFromHBITMAP(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        HDC a0;
        HBITMAP a1;
        int a2;
        int a3;

        if (sipParseArgs(&sipParseErr, sipArgs, "vvii", &a0, &a1, &a2, &a3))
        {
            QImage*sipRes;

            sipRes = new QImage(QtWin::imageFromHBITMAP(a0,a1,a2,a3));

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_imageFromHBITMAP, doc_QtWin_imageFromHBITMAP);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_toHICON, "QtWin.toHICON(QPixmap) -> sip.voidptr");

extern "C" {static PyObject *meth_QtWin_toHICON(PyObject *, PyObject *);}
static PyObject *meth_QtWin_toHICON(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixmap* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QPixmap, &a0))
        {
            HICON sipRes;

            sipRes = QtWin::toHICON(*a0);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_toHICON, doc_QtWin_toHICON);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_fromHBITMAP, "QtWin.fromHBITMAP(sip.voidptr, QtWin.HBitmapFormat format=QtWin.HBitmapNoAlpha) -> QPixmap");

extern "C" {static PyObject *meth_QtWin_fromHBITMAP(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QtWin_fromHBITMAP(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        HBITMAP a0;
        QtWin::HBitmapFormat a1 = QtWin::HBitmapNoAlpha;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "v|E", &a0, sipType_QtWin_HBitmapFormat, &a1))
        {
            QPixmap*sipRes;

            sipRes = new QPixmap(QtWin::fromHBITMAP(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_fromHBITMAP, doc_QtWin_fromHBITMAP);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_toHBITMAP, "QtWin.toHBITMAP(QPixmap, QtWin.HBitmapFormat format=QtWin.HBitmapNoAlpha) -> sip.voidptr");

extern "C" {static PyObject *meth_QtWin_toHBITMAP(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QtWin_toHBITMAP(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixmap* a0;
        QtWin::HBitmapFormat a1 = QtWin::HBitmapNoAlpha;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J9|E", sipType_QPixmap, &a0, sipType_QtWin_HBitmapFormat, &a1))
        {
            HBITMAP sipRes;

            sipRes = QtWin::toHBITMAP(*a0,a1);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_toHBITMAP, doc_QtWin_toHBITMAP);

    return NULL;
}


PyDoc_STRVAR(doc_QtWin_createMask, "QtWin.createMask(QBitmap) -> sip.voidptr");

extern "C" {static PyObject *meth_QtWin_createMask(PyObject *, PyObject *);}
static PyObject *meth_QtWin_createMask(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBitmap* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QBitmap, &a0))
        {
            HBITMAP sipRes;

            sipRes = QtWin::createMask(*a0);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_createMask, doc_QtWin_createMask);

    return NULL;
}


static PyMethodDef methods_QtWin[] = {
    {SIP_MLNAME_CAST(sipName_colorizationColor), (PyCFunction)meth_QtWin_colorizationColor, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QtWin_colorizationColor)},
    {SIP_MLNAME_CAST(sipName_createMask), meth_QtWin_createMask, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_createMask)},
    {SIP_MLNAME_CAST(sipName_disableBlurBehindWindow), meth_QtWin_disableBlurBehindWindow, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_disableBlurBehindWindow)},
    {SIP_MLNAME_CAST(sipName_enableBlurBehindWindow), meth_QtWin_enableBlurBehindWindow, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_enableBlurBehindWindow)},
    {SIP_MLNAME_CAST(sipName_errorStringFromHresult), meth_QtWin_errorStringFromHresult, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_errorStringFromHresult)},
    {SIP_MLNAME_CAST(sipName_extendFrameIntoClientArea), meth_QtWin_extendFrameIntoClientArea, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_extendFrameIntoClientArea)},
    {SIP_MLNAME_CAST(sipName_fromHBITMAP), (PyCFunction)meth_QtWin_fromHBITMAP, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QtWin_fromHBITMAP)},
    {SIP_MLNAME_CAST(sipName_fromHICON), meth_QtWin_fromHICON, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_fromHICON)},
    {SIP_MLNAME_CAST(sipName_fromHRGN), meth_QtWin_fromHRGN, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_fromHRGN)},
    {SIP_MLNAME_CAST(sipName_imageFromHBITMAP), meth_QtWin_imageFromHBITMAP, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_imageFromHBITMAP)},
    {SIP_MLNAME_CAST(sipName_isCompositionEnabled), meth_QtWin_isCompositionEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_isCompositionEnabled)},
    {SIP_MLNAME_CAST(sipName_isCompositionOpaque), meth_QtWin_isCompositionOpaque, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_isCompositionOpaque)},
    {SIP_MLNAME_CAST(sipName_isWindowExcludedFromPeek), meth_QtWin_isWindowExcludedFromPeek, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_isWindowExcludedFromPeek)},
    {SIP_MLNAME_CAST(sipName_isWindowPeekDisallowed), meth_QtWin_isWindowPeekDisallowed, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_isWindowPeekDisallowed)},
    {SIP_MLNAME_CAST(sipName_markFullscreenWindow), (PyCFunction)meth_QtWin_markFullscreenWindow, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QtWin_markFullscreenWindow)},
    {SIP_MLNAME_CAST(sipName_realColorizationColor), meth_QtWin_realColorizationColor, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_realColorizationColor)},
    {SIP_MLNAME_CAST(sipName_resetExtendedFrame), meth_QtWin_resetExtendedFrame, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_resetExtendedFrame)},
    {SIP_MLNAME_CAST(sipName_setCompositionEnabled), meth_QtWin_setCompositionEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_setCompositionEnabled)},
    {SIP_MLNAME_CAST(sipName_setCurrentProcessExplicitAppUserModelID), meth_QtWin_setCurrentProcessExplicitAppUserModelID, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_setCurrentProcessExplicitAppUserModelID)},
    {SIP_MLNAME_CAST(sipName_setWindowDisallowPeek), meth_QtWin_setWindowDisallowPeek, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_setWindowDisallowPeek)},
    {SIP_MLNAME_CAST(sipName_setWindowExcludedFromPeek), meth_QtWin_setWindowExcludedFromPeek, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_setWindowExcludedFromPeek)},
    {SIP_MLNAME_CAST(sipName_setWindowFlip3DPolicy), meth_QtWin_setWindowFlip3DPolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_setWindowFlip3DPolicy)},
    {SIP_MLNAME_CAST(sipName_stringFromHresult), meth_QtWin_stringFromHresult, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_stringFromHresult)},
    {SIP_MLNAME_CAST(sipName_taskbarActivateTab), meth_QtWin_taskbarActivateTab, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_taskbarActivateTab)},
    {SIP_MLNAME_CAST(sipName_taskbarActivateTabAlt), meth_QtWin_taskbarActivateTabAlt, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_taskbarActivateTabAlt)},
    {SIP_MLNAME_CAST(sipName_taskbarAddTab), meth_QtWin_taskbarAddTab, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_taskbarAddTab)},
    {SIP_MLNAME_CAST(sipName_taskbarDeleteTab), meth_QtWin_taskbarDeleteTab, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_taskbarDeleteTab)},
    {SIP_MLNAME_CAST(sipName_toHBITMAP), (PyCFunction)meth_QtWin_toHBITMAP, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QtWin_toHBITMAP)},
    {SIP_MLNAME_CAST(sipName_toHICON), meth_QtWin_toHICON, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_toHICON)},
    {SIP_MLNAME_CAST(sipName_toHRGN), meth_QtWin_toHRGN, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_toHRGN)},
    {SIP_MLNAME_CAST(sipName_windowFlip3DPolicy), meth_QtWin_windowFlip3DPolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QtWin_windowFlip3DPolicy)}
};

static sipEnumMemberDef enummembers_QtWin[] = {
    {sipName_FlipDefault, static_cast<int>(QtWin::FlipDefault), 14},
    {sipName_FlipExcludeAbove, static_cast<int>(QtWin::FlipExcludeAbove), 14},
    {sipName_FlipExcludeBelow, static_cast<int>(QtWin::FlipExcludeBelow), 14},
    {sipName_HBitmapAlpha, static_cast<int>(QtWin::HBitmapAlpha), 13},
    {sipName_HBitmapNoAlpha, static_cast<int>(QtWin::HBitmapNoAlpha), 13},
    {sipName_HBitmapPremultipliedAlpha, static_cast<int>(QtWin::HBitmapPremultipliedAlpha), 13},
};


pyqt5ClassTypeDef sipTypeDef_QtWinExtras_QtWin = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_NAMESPACE,
        sipNameNr_QtWin,
        {0}
    },
    {
        sipNameNr_QtWin,
        {0, 0, 1},
        31, methods_QtWin,
        6, enummembers_QtWin,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
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
    0,
    0,
    0,
    0,
    0,
    0,
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

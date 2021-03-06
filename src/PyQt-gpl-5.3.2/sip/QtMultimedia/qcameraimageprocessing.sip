// qcameraimageprocessing.sip generated by MetaSIP on Fri Sep 12 23:05:16 2014
//
// This file is part of the QtMultimedia Python extension module.
//
// Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
// 
// This file is part of PyQt5.
// 
// This file may be used under the terms of the GNU General Public License
// version 3.0 as published by the Free Software Foundation and appearing in
// the file LICENSE included in the packaging of this file.  Please review the
// following information to ensure the GNU General Public License version 3.0
// requirements will be met: http://www.gnu.org/copyleft/gpl.html.
// 
// If you do not wish to use this file under the terms of the GPL version 3.0
// then you may purchase a commercial license.  For more information contact
// info@riverbankcomputing.com.
// 
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.


class QCameraImageProcessing : QObject
{
%TypeHeaderCode
#include <qcameraimageprocessing.h>
%End

public:
    enum WhiteBalanceMode
    {
        WhiteBalanceAuto,
        WhiteBalanceManual,
        WhiteBalanceSunlight,
        WhiteBalanceCloudy,
        WhiteBalanceShade,
        WhiteBalanceTungsten,
        WhiteBalanceFluorescent,
        WhiteBalanceFlash,
        WhiteBalanceSunset,
        WhiteBalanceVendor,
    };

    bool isAvailable() const;
    QCameraImageProcessing::WhiteBalanceMode whiteBalanceMode() const;
    void setWhiteBalanceMode(QCameraImageProcessing::WhiteBalanceMode mode);
    bool isWhiteBalanceModeSupported(QCameraImageProcessing::WhiteBalanceMode mode) const;
    qreal manualWhiteBalance() const;
    void setManualWhiteBalance(qreal colorTemperature);
    qreal contrast() const;
    void setContrast(qreal value);
    qreal saturation() const;
    void setSaturation(qreal value);
    qreal sharpeningLevel() const;
    void setSharpeningLevel(qreal value);
    qreal denoisingLevel() const;
    void setDenoisingLevel(qreal value);

private:
    QCameraImageProcessing(QCamera *camera);
    virtual ~QCameraImageProcessing();
    QCameraImageProcessing(const QCameraImageProcessing &);
};

/*
* This file is part of the Pandaria 5.4.8 Project. See THANKS file for Copyright information
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _AUTHCRYPT_H
#define _AUTHCRYPT_H

#include "PacketCrypt.h"

class BigNumber;

class AuthCrypt : public PacketCrypt
{
    public:
        AuthCrypt();

        void Init(BigNumber* K) override;
        void Init(BigNumber* k, uint8 const* serverKey, uint8 const* clientKey);
};
#endif

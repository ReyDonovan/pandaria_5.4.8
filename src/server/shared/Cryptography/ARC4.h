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

#ifndef _AUTH_SARC4_H
#define _AUTH_SARC4_H

#include "Define.h"
#include <array>
#include <openssl/evp.h>

class ARC4
{
    public:
        ARC4(uint32 len);
        ARC4(uint8 const* seed, uint32 len);
        ~ARC4();
        void Init(uint8 const* seed);
        void UpdateData(int len, uint8* data);
    private:
#if OPENSSL_VERSION_NUMBER >= 0x30000000L
    EVP_CIPHER *_cipher;
#endif
    EVP_CIPHER_CTX* _ctx;
};

#endif

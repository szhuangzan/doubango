/*
* Copyright (C) 2009 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou@yahoo.fr>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/

/**@file txc_oma-presrules.h
 * @brief <a href="http://www.openmobilealliance.org/Technical/release_program/docs/PresenceSIMPLE/V1_1-20080627-A/OMA-TS-Presence_SIMPLE_XDM-V1_1-20080627-A.pdf">[OMA-TS-Presence_SIMPLE_XDM-V1_1-20080627-A] - OMA Presence Authorization Rules</a>
 *
 * @author Mamadou Diop <diopmamadou(at)yahoo.fr>
 *
 * @date Created: Sat Nov 8 16:54:58 2009 mdiop
 */

/* as per RCS1: http://www.gsmworld.com/documents/rcs/rcs1_updates/R1_090831_RCS_Release_1_Technical_Realisation_v1_1.pdf subclause 4.4*/
#ifndef _TINYXCAP_TXC_OMA_PRESRULES_H_
#define _TINYXCAP_TXC_OMA_PRESRULES_H_

#include "tinyxcap_config.h"
#include "txc.h"

TINYXCAP_API char* txc_oma_presrules_serialize(const txc_context_t *context);

#endif /* _TINYXCAP_TXC_OMA_PRESRULES_H_ */
/*
 *                         Vortex OpenSplice
 *
 *   This software and documentation are Copyright 2006 to TO_YEAR ADLINK
 *   Technology Limited, its affiliated companies and licensors. All rights
 *   reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */

#ifndef V__SUBSCRIBERQOS_H
#define V__SUBSCRIBERQOS_H

#if defined (__cplusplus)
extern "C" {
#endif

#include "v_qos.h"
#include "v_subscriberQos.h"

_Success_(return == V_RESULT_OK)
v_result
v_subscriberQosCompare(
    _In_ v_subscriberQos _this,
    _In_ v_subscriberQos tmpl,
    _In_ c_bool enable,
    _Out_ v_qosChangeMask *changeMask);

c_bool
v_subscriberQosIsGroupCoherent (
    _In_ _Const_ v_subscriberQos _this);

#if defined (__cplusplus)
}
#endif

#endif /* V__SUBSCRIBERQOS_H */

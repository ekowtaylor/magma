/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the terms found in the LICENSE file in the root of this source tree.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#ifndef FILE_S1AP_MME_DECODER_SEEN
#define FILE_S1AP_MME_DECODER_SEEN
#include "bstrlib.h"
#include "s1ap_common.h"
#include "s1ap_ies_defs.h"
#include "intertask_interface_types.h"

int s1ap_mme_decode_pdu(
    s1ap_message* message, const_bstring const raw, MessagesIds* messages_id)
    __attribute__((warn_unused_result));
int s1ap_free_mme_decode_pdu(s1ap_message* message, MessagesIds messages_id);

#endif /* FILE_S1AP_MME_DECODER_SEEN */

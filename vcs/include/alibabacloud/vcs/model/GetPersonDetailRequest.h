/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_VCS_MODEL_GETPERSONDETAILREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_GETPERSONDETAILREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT GetPersonDetailRequest : public RpcServiceRequest
			{

			public:
				GetPersonDetailRequest();
				~GetPersonDetailRequest();

				std::string getAlgorithmType()const;
				void setAlgorithmType(const std::string& algorithmType);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getPersonID()const;
				void setPersonID(const std::string& personID);

            private:
				std::string algorithmType_;
				std::string corpId_;
				std::string personID_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_GETPERSONDETAILREQUEST_H_
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

#ifndef ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_INVOKESERVICEASYNCREQUEST_H_
#define ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_INVOKESERVICEASYNCREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/industry-brain/Industry_brainExport.h>

namespace AlibabaCloud
{
	namespace Industry_brain
	{
		namespace Model
		{
			class ALIBABACLOUD_INDUSTRY_BRAIN_EXPORT InvokeServiceAsyncRequest : public RpcServiceRequest
			{

			public:
				InvokeServiceAsyncRequest();
				~InvokeServiceAsyncRequest();

				bool getIsShowInput()const;
				void setIsShowInput(bool isShowInput);
				std::string getServiceId()const;
				void setServiceId(const std::string& serviceId);
				std::string getParams()const;
				void setParams(const std::string& params);
				std::string getRequestData()const;
				void setRequestData(const std::string& requestData);

            private:
				bool isShowInput_;
				std::string serviceId_;
				std::string params_;
				std::string requestData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_INVOKESERVICEASYNCREQUEST_H_
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

#ifndef ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERLISTENERATTRIBUTEEXREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERLISTENERATTRIBUTEEXREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT SetLoadBalancerListenerAttributeExRequest : public RpcServiceRequest
			{
			public:
				struct KvAttribute
				{
					std::string value;
					std::string key;
				};

			public:
				SetLoadBalancerListenerAttributeExRequest();
				~SetLoadBalancerListenerAttributeExRequest();

				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::vector<KvAttribute> getKvAttribute()const;
				void setKvAttribute(const std::vector<KvAttribute>& kvAttribute);
				std::string getProtocol()const;
				void setProtocol(const std::string& protocol);
				std::string getLoadBalancerId()const;
				void setLoadBalancerId(const std::string& loadBalancerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);

            private:
				int listenerPort_;
				std::vector<KvAttribute> kvAttribute_;
				std::string protocol_;
				std::string loadBalancerId_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERLISTENERATTRIBUTEEXREQUEST_H_
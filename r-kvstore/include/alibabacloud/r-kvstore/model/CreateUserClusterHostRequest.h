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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_CREATEUSERCLUSTERHOSTREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_CREATEUSERCLUSTERHOSTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT CreateUserClusterHostRequest : public RpcServiceRequest
			{

			public:
				CreateUserClusterHostRequest();
				~CreateUserClusterHostRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCouponNo()const;
				void setCouponNo(const std::string& couponNo);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				int getOrderPeriod()const;
				void setOrderPeriod(int orderPeriod);
				std::string getBusinessInfo()const;
				void setBusinessInfo(const std::string& businessInfo);
				std::string getAgentId()const;
				void setAgentId(const std::string& agentId);
				std::string getHostClass()const;
				void setHostClass(const std::string& hostClass);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getOrderNum()const;
				void setOrderNum(int orderNum);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);

            private:
				long resourceOwnerId_;
				std::string couponNo_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string regionId_;
				std::string engine_;
				int orderPeriod_;
				std::string businessInfo_;
				std::string agentId_;
				std::string hostClass_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int orderNum_;
				std::string clusterId_;
				long ownerId_;
				bool autoRenew_;
				std::string zoneId_;
				std::string chargeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_CREATEUSERCLUSTERHOSTREQUEST_H_
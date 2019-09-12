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

#ifndef ALIBABACLOUD_RDS_MODEL_PRECHECKCREATEORDERREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_PRECHECKCREATEORDERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT PreCheckCreateOrderRequest : public RpcServiceRequest
			{

			public:
				PreCheckCreateOrderRequest();
				~PreCheckCreateOrderRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getDBInstanceStorage()const;
				void setDBInstanceStorage(int dBInstanceStorage);
				std::string getSystemDBCharset()const;
				void setSystemDBCharset(const std::string& systemDBCharset);
				std::string getCountryCode()const;
				void setCountryCode(const std::string& countryCode);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getCurrencyCode()const;
				void setCurrencyCode(const std::string& currencyCode);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getDBInstanceDescription()const;
				void setDBInstanceDescription(const std::string& dBInstanceDescription);
				std::string getBusinessInfo()const;
				void setBusinessInfo(const std::string& businessInfo);
				std::string getAgentId()const;
				void setAgentId(const std::string& agentId);
				std::string getResource()const;
				void setResource(const std::string& resource);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				std::string getCommodityCode()const;
				void setCommodityCode(const std::string& commodityCode);
				std::string getEncryptionKey()const;
				void setEncryptionKey(const std::string& encryptionKey);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDBInstanceClass()const;
				void setDBInstanceClass(const std::string& dBInstanceClass);
				std::string getSecurityIPList()const;
				void setSecurityIPList(const std::string& securityIPList);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getAutoRenew()const;
				void setAutoRenew(const std::string& autoRenew);
				std::string getPromotionCode()const;
				void setPromotionCode(const std::string& promotionCode);
				std::string getRoleARN()const;
				void setRoleARN(const std::string& roleARN);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getTimeType()const;
				void setTimeType(const std::string& timeType);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);
				std::string getConnectionMode()const;
				void setConnectionMode(const std::string& connectionMode);
				std::string getNodeType()const;
				void setNodeType(const std::string& nodeType);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getZoneIdSlave1()const;
				void setZoneIdSlave1(const std::string& zoneIdSlave1);
				std::string getZoneIdSlave2()const;
				void setZoneIdSlave2(const std::string& zoneIdSlave2);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getDBInstanceStorageType()const;
				void setDBInstanceStorageType(const std::string& dBInstanceStorageType);
				std::string getDBInstanceNetType()const;
				void setDBInstanceNetType(const std::string& dBInstanceNetType);
				std::string getRestoreTime()const;
				void setRestoreTime(const std::string& restoreTime);
				int getQuantity()const;
				void setQuantity(int quantity);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getUsedTime()const;
				void setUsedTime(const std::string& usedTime);
				int getInstanceUsedType()const;
				void setInstanceUsedType(int instanceUsedType);
				std::string getVPCId()const;
				void setVPCId(const std::string& vPCId);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				std::string getPayType()const;
				void setPayType(const std::string& payType);

            private:
				long resourceOwnerId_;
				int dBInstanceStorage_;
				std::string systemDBCharset_;
				std::string countryCode_;
				std::string engineVersion_;
				std::string currencyCode_;
				std::string resourceGroupId_;
				std::string dBInstanceDescription_;
				std::string businessInfo_;
				std::string agentId_;
				std::string resource_;
				std::string backupId_;
				std::string commodityCode_;
				std::string encryptionKey_;
				long ownerId_;
				std::string dBInstanceClass_;
				std::string securityIPList_;
				std::string vSwitchId_;
				std::string privateIpAddress_;
				std::string autoRenew_;
				std::string promotionCode_;
				std::string roleARN_;
				std::string zoneId_;
				std::string timeType_;
				std::string instanceNetworkType_;
				std::string connectionMode_;
				std::string nodeType_;
				std::string clientToken_;
				std::string zoneIdSlave1_;
				std::string zoneIdSlave2_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string engine_;
				std::string dBInstanceId_;
				std::string dBInstanceStorageType_;
				std::string dBInstanceNetType_;
				std::string restoreTime_;
				int quantity_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string usedTime_;
				int instanceUsedType_;
				std::string vPCId_;
				std::string category_;
				std::string payType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_PRECHECKCREATEORDERREQUEST_H_
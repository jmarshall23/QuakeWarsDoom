// Copyright (C) 2007 Id Software, Inc.
//

#ifndef __SDNET_ERRCODE_H__
#define __SDNET_ERRCODE_H__

enum sdNetErrorCode_e {
	SDNET_NO_ERROR = 0,
	SDNET_UNKNOWN_ERROR = 1,	// should never use this
	SDNET_BAD_PARAMETERS = 2,
	SDNET_CANCELLED = 3,
	SDNET_NOT_INITIALIZED = 4,
	SDNET_BUSY = 5,
	SDNET_INVALID_USER_ID = 6,
	SDNET_PERMISSION_DENIED = 7,
	SDNET_THROTTLED = 8,
	SDNET_BAD_TITLE_ID = 9,
	SDNET_DISABLED_TITLE_ID = 10,

	// Connection
	SDNET_NOT_CONNECTED = 100,
	SDNET_PORT_OPEN_FAILED,
	SDNET_RESOLVE_FAILED,
	SDNET_CONNECTION_RESET,
	SDNET_SERVICE_UNAVAILABLE,
	SDNET_SESSION_UNAVAILABLE,
	SDNET_ACCESS_DENIED,

	// User management
	SDNET_USER_USERNAME_EXISTS = 200,
	SDNET_USER_NONE_ACTIVE,
	SDNET_USER_MISSING_PROFILE,

	// Online accounts
	SDNET_AUTH_BAD_ACCOUNT = 300,
	SDNET_AUTH_USERNAME_EXISTS,
	SDNET_AUTH_USERNAME_ILLEGAL,
	SDNET_AUTH_USERNAME_VULGAR,
	SDNET_AUTH_MAX_ACC_EXCEEDED,
	SDNET_AUTH_ACCOUNT_EXPIRED,
	SDNET_AUTH_ACCOUNT_LOCKED,
	SDNET_AUTH_INCORRECT_PASSWORD,
	SDNET_AUTH_BAD_REQUEST,
	SDNET_AUTH_IP_NOT_ALLOWED,

	// CD-key auth
	SDNET_AUTHKEY_INVALID = 400,
	SDNET_AUTHKEY_BANNED,
	SDNET_AUTHKEY_INUSE,

	// Friendship management
	SDNET_FRIEND_SELF_FRIENDSHIP_NOT_ALLOWED = 500,
	SDNET_FRIEND_ALREADY_FRIENDS,
	SDNET_FRIEND_FRIENSHIP_ALREADY_PROPOSED,
	SDNET_FRIEND_FRIENDSHIP_NOT_REQUESTED,
	SDNET_FRIEND_SELF_BLOCK_NOT_ALLOWED,
	SDNET_FRIEND_FRIENDS_FULL,
	SDNET_FRIEND_NOT_A_FRIEND,
	SDNET_FRIEND_NOT_INVITED,
	SDNET_FRIEND_OPERATION_BLOCKED,
	SDNET_FRIEND_MISSING_PROFILE,

	// Team management
	SDNET_TEAM_MEMBERSHIP_NOT_REQUESTED = 600,
	SDNET_TEAM_ALREADY_EXISTS,
	SDNET_TEAM_NO_MULTIPLE_MEMBERSHIP,
	SDNET_TEAM_NO_MULTIPLE_OWNERSHIP,
	SDNET_TEAM_NOT_A_MEMBER,
	SDNET_TEAM_INVALID,
	SDNET_TEAM_INVALID_NAME,
	SDNET_TEAM_NOT_INVITED,
	SDNET_TEAM_NOT_A_OWNER,
	SDNET_TEAM_NOT_AN_ADMIN_OR_OWNER,
	SDNET_TEAM_MEMBERSHIP_ALREADY_PROPOSED,
	SDNET_TEAM_MEMBER_ALREADY_EXISTS,
	SDNET_TEAM_FULL,
	SDNET_TEAM_NAME_VULGAR,

};

#endif

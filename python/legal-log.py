# https://edabit.com/challenge/XmQjSjbsfLg3y33ES

def legalbacklog(cases, max_daily_sessions):
	sessions = list(cases.values())
	sessions.sort(reverse=True)
	activecases = len(sessions)
	daycount = 0
	while activecases > 0:
		for i in range(min(activecases, max_daily_sessions)):
			sessions[i] -= 1
			if sessions[i] == 0:
				activecases -= 1
		sessions.sort(reverse=True)
		daycount += 1
	return daycount
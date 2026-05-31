class Solution(object):
    def asteroidsDestroyed(self, mass, asteroids):
        cmass = mass
        asteroids.sort()

        for i in asteroids:
            if cmass < i:
                return False
            cmass += i

        return True
class ChallengeClass {
  ValidateSecretCode(s) {
    return s.match(/[aeiou]/g).length >= 3 && s.match(/ab|cd|pq|xy/g) == null && s.match(/([a-z])\1/g) != null;
  }
}


function ChallengeClass() {
    this.ValidateSecretCode = function (secretCode) {
        var vowels = 0;
        var ab = false;
        var cd = false;
        var pq = false;
        var xy = false;
        var dup = false;
        function checkPassword(password) {
            for (var i = 0; i < password.length; i++) {
                if (password[i] == 'a' || password[i] == 'e' || password[i] == 'i' || password[i] == 'o' || password[i] == 'u') {
                    vowels++;
                }
                if (password[i] == 'a' && password[i + 1] == 'b') {
                    ab = true;
                }
                if (password[i] == 'c' && password[i + 1] == 'd') {
                    cd = true;
                }
                if (password[i] == 'p' && password[i + 1] == 'q') {
                    pq = true;
                }
                if (password[i] == 'x' && password[i + 1] == 'y') {
                    xy = true;
                }
                if (password[i] == password[i + 1]) {
                    dup = true;
                }
            }
            if (vowels >= 3 && ab == false && cd == false && pq == false && xy == false && dup == true) {
                return true;
            } else {
                return false;
            }
        }
        return checkPassword(secretCode);
    }
}

var result = ChallengeClass.ValidateSecretCode("password");

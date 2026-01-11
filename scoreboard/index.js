let homescore = 0
let guestscore = 0

function increaseHomeScoreOne(points) {
    homescore += points
    document.getElementById("home-score").textContent = homescore
}

function increaseGuestScoreOne(points) {
    guestscore += points
    document.getElementById("guest-score").textContent = guestscore
}

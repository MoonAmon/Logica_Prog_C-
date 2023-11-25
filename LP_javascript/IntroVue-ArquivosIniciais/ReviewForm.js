const reviewFormComponent = {
    template: /*html*/`
        <form class="review-form" @submit.prevent="enviaDados">
            <h3>Avalie o produto</h3>
            <label for="nome">Nome:</label>
            <input id="nome" v-model="nome">

            <label for="avalicao">Avaliação:</label>
            <textarea id="avalicao" v-model="avalicao"></textarea>

            <label for="nota">Nota:</label>
            <select id="nota" v-model.number="nota">
                <option>5</option>
                <option>4</option>
                <option>3</option>
                <option>2</option>
                <option>1</option>
            </select>
            <input class="button" type="submit" value="Enviar">
        </form>`,
    data() {
        return {
            nome: '',
            avalicao: '',
            nota: null
        }
    },
    methods: {
        enviaDados(){
            if(this.nome === '' || this.avalicao === '' || this.nota === null){
                alert('Por favor, preencha todos os campos.')
                return
            }

            let productReview = {
                nome: this.nome,
                avalicao: this.avalicao,
                nota: this.nota
            }
            this.$emit('review-submitted', productReview)

            this.nome = ''
            this.avalicao = ''
            this.nota = null
        }
        
    }
}

export default reviewFormComponent;